#ifndef THREAD_ONE_H
#define THREAD_ONE_H

#include <QThread>
#include "QTextEdit"
class thread_one : public QThread
{
    Q_OBJECT
public:
    explicit thread_one(QObject *parent = nullptr);
    QString number ="3";
    QString machine_serial = "";
    int one_or_many = 0;

    //QTextEdit * tmp_text_edit ;
protected:
    void run();//多线程执行的内容将通过重新该虚函数实现
signals:
    void over();
public slots:


private:
    //QString adb_save = "adb shell cat /dev/input/event3 &gt /sdcard/event3";


    QString adb_save = "";
    QString adb_save_start = "cat /dev/input/event";
    QString adb_save_med = " > /sdcard/event";
    QString adb_save_end = "";
};

#endif // THREAD_ONE_H
