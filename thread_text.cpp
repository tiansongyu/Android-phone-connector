#include "thread_text.h"

thread_text::thread_text(QObject *parent) : QThread(parent)
{
}
void thread_text::run()
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
