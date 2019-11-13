#include "thread_one.h"
#include "QDebug"
#include "QProcess"
#include "QStringList"
#include "QMessageBox"

thread_one::thread_one(QObject *parent) : QThread(parent)
{
}
void thread_one::run()
{

    adb_save.append(adb_save_start);
    adb_save.append(number);
    adb_save.append(adb_save_med);
    adb_save.append(number);
    adb_save.append(adb_save_end);

    QStringList arguments;
    if(one_or_many == 1)
    {
         arguments<<"-s"<<machine_serial;
    }
    arguments<<"shell"<<adb_save;
    qDebug() << arguments <<endl;

    QProcess process1(this);
    process1.start("adb.exe",arguments);
    process1.waitForStarted();
    process1.waitForFinished(5000);
    //QString strResult = QString::fromLocal8Bit(process1.readAllStandardOutput());
    process1.kill();
    adb_save= "";
    //tmp_text_edit->clear();
    //tmp_text_edit->setPlainText("时间到，按钮已经记录");
}
