#include "widget.h"
Widget::Widget(QWidget *parent
               ) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    radio_init();

}

Widget::~Widget()
{
    delete ui;
}
void Widget::on_pushButton_connect_clicked()
{
    system("adb devices > 1.txt");
    init_text();
    number = '3';

}
void Widget::radio_init()
{
    groupButton1=new QButtonGroup(this);
    groupButton1->addButton(ui->radioButton_one,0);
    groupButton1->addButton(ui->radioButton_many,1);
    ui->radioButton_one->setChecked(true); //默认选中apple_radioButton
}
void Widget::init_text()
{

    QString displayString;
    QFile file("./1.txt");
    if(!file.open(QIODevice::ReadOnly | QIODevice::Text))
    {
        qDebug()<<"Can't open the file!"<<endl;
        return;
    }

    while(!file.atEnd())
    {

        QByteArray line = file.readLine();
        QString str(line);
        qDebug()<< str;
        displayString.append(str);

    }

    ui->textEdit->clear();
    ui->textEdit->setPlainText(displayString);

}
void Widget::sleep(int msec)
{
    QTime dieTime = QTime::currentTime().addMSecs(msec);
    while( QTime::currentTime() < dieTime )
    QCoreApplication::processEvents(QEventLoop::AllEvents, 100);
}

void Widget::on_pushButton_start_cover_clicked()
{

    //listen_thread.tmp_text_edit = ui->textEdit;
    listen_thread.start();

    QString displayString = "请在5秒之内摁下需要连续点击的位置";

    ui->textEdit->clear();
    ui->textEdit->setPlainText(displayString);



    sleep(5000);


    ui->textEdit->clear();
    ui->textEdit->setPlainText("按键已经记录");

}

void Widget::on_pushButton_one_click_clicked()
{

    adb_one_click.append(adb_one_click_start);
    if(groupButton1->checkedId() == 1)
    {
        adb_one_click.append(adb_s);
        adb_one_click.append(machine_serial);
    }
    adb_one_click.append(adb_one_click_start_2);
    adb_one_click.append(number);

    adb_one_click.append(adb_one_click_med);
    adb_one_click.append(number);
    adb_one_click.append(adb_one_click_end);


    std::string adb_ = adb_one_click.toStdString();
    const char* ch = adb_.c_str();
    qDebug() << adb_one_click << endl;
    system(ch);
    //system("adb shell input tap 619 423");
    adb_one_click = "";
}


void Widget::on_pushButton_start_click_clicked()
{
    adb_start_one_click.append(adb_start_one_start);
    if(groupButton1->checkedId() == 1)
    {
        adb_start_one_click.append(adb_s);
        adb_start_one_click.append(machine_serial);
    }
    adb_start_one_click.append(adb_start_one_start_2);
    adb_start_one_click.append(number);

    adb_start_one_click.append(adb_start_one_med);
    adb_start_one_click.append(number);
    adb_start_one_click.append(adb_start_one_end);


    std::string adb_ = adb_start_one_click.toStdString();
    const char* ch = adb_.c_str();
    system(ch);
    qDebug() << adb_start_one_click<<endl;
    adb_start_one_click = "";

}

void Widget::on_pushButton_clicked()
{
    qDebug() << ui->lineEdit->text()<<endl;
    machine_serial = ui->lineEdit->text();
    machine_name = machine_serial;


    listen_thread.machine_serial = machine_serial;
    listen_thread.one_or_many = groupButton1->checkedId();
    adb_getevent.append(adb_getevent_start);
    if(groupButton1->checkedId() == 1)
    {
        adb_getevent.append(adb_s);
        adb_getevent.append(machine_serial);
    }
    adb_getevent.append(adb_getevent_end);

    adb_getevent.append(machine_name);
    adb_getevent.append(adb_getevent_txt);
    qDebug() <<adb_getevent <<endl;
    std::string adb_ = adb_getevent.toStdString();
    const char* ch = adb_.c_str();
    system(ch);
    adb_getevent = "";

   // system("adb shell getevent -l > 2.txt");
    sleep(1000);
    QString displayString;
    QString file_name = "./.txt";

    file_name = "./"+machine_name+".txt";

    qDebug() << "dds"<<file_name <<endl;


    QFile file(file_name);
    if(!file.open(QIODevice::ReadOnly | QIODevice::Text))
    {
        qDebug()<<"Can't open the file!"<<endl;
        return;
    }
    sleep(100);
    while(!file.atEnd())
    {

        QByteArray line = file.readLine();
        QString str(line);
        if(str.contains("ABS_MT_POSITION_X",Qt::CaseSensitive) == true)
        {
           qDebug()<<"i find it "<<endl;
           qDebug()<< str[16] <<endl;
           number = str[16] ;
           listen_thread.number= number ;
           return ;
        }
    }


}
