#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include "thread_one.h"

#include "ui_widget.h"
#include "Windows.h"
#include "QString"
#include "QFile"
#include "QtDebug"
#include "QByteArray"
#include "shellapi.h"
#include "QProcess"
#include "QMessageBox"
#include "QTimer"
#include "Qtime"
#include "QButtonGroup"
namespace Ui {
class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent = nullptr);
    ~Widget();
    void init_text();
    thread_one listen_thread;
    void sleep(int msec);
    void radio_init();
    QProcess * cmd;
private slots:
    void on_pushButton_connect_clicked();
    void on_pushButton_start_cover_clicked();
    void on_pushButton_one_click_clicked();

    void on_pushButton_start_click_clicked();

    void on_pushButton_clicked();


private:
    QString machine_name;

    QString adb_getevent ;

    QString adb_getevent_start = "adb";
    QString machine_serial = "";
    QString adb_getevent_end = " shell getevent -l >";
    QString adb_getevent_txt = ".txt";

    QString adb_one_click_another = "";

    QString adb_one_click = "";
    QString adb_one_click_start = "adb";
    QString adb_one_click_start_2 = " shell dd if=/sdcard/event";

    QString adb_one_click_med = " of=/dev/input/event";
    QString adb_one_click_end = "";

    QString adb_start_one_click_another = "";
    QString adb_start_one_click = "";


    QString adb_start_one_start = "adb";
    QString adb_start_one_start_2 = " shell while : ; do dd if=/sdcard/event";

    QString adb_start_one_med = " of=/dev/input/event";
    QString adb_start_one_end = "";

    QString adb_s = " -s ";


    QString adb_connect = "adb devices > 1.txt";
    Ui::Widget *ui;
    QString number ;

    QButtonGroup *groupButton1;

    QButtonGroup *groupButton2;
};

#endif // WIDGET_H
