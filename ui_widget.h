/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 5.13.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_widget
{
public:
    QPushButton *pushButton_connect;
    QPushButton *pushButton_start_cover;
    QPushButton *pushButton_one_click;
    QPushButton *pushButton_start_click;
    QTextEdit *textEdit;
    QPushButton *pushButton;
    QLineEdit *lineEdit;
    QRadioButton *radioButton_one;
    QRadioButton *radioButton_many;
    QRadioButton *radioButton_fast;
    QRadioButton *radioButton_med;
    QRadioButton *radioButton_slow;

    void setupUi(QWidget *widget)
    {
        if (widget->objectName().isEmpty())
            widget->setObjectName(QString::fromUtf8("widget"));
        widget->resize(884, 547);
        pushButton_connect = new QPushButton(widget);
        pushButton_connect->setObjectName(QString::fromUtf8("pushButton_connect"));
        pushButton_connect->setGeometry(QRect(30, 50, 131, 61));
        pushButton_start_cover = new QPushButton(widget);
        pushButton_start_cover->setObjectName(QString::fromUtf8("pushButton_start_cover"));
        pushButton_start_cover->setGeometry(QRect(30, 240, 151, 61));
        pushButton_one_click = new QPushButton(widget);
        pushButton_one_click->setObjectName(QString::fromUtf8("pushButton_one_click"));
        pushButton_one_click->setGeometry(QRect(30, 340, 131, 61));
        pushButton_start_click = new QPushButton(widget);
        pushButton_start_click->setObjectName(QString::fromUtf8("pushButton_start_click"));
        pushButton_start_click->setGeometry(QRect(30, 440, 121, 71));
        textEdit = new QTextEdit(widget);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setGeometry(QRect(380, 50, 441, 461));
        pushButton = new QPushButton(widget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(30, 140, 171, 61));
        lineEdit = new QLineEdit(widget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(200, 230, 151, 31));
        radioButton_one = new QRadioButton(widget);
        radioButton_one->setObjectName(QString::fromUtf8("radioButton_one"));
        radioButton_one->setGeometry(QRect(190, 40, 117, 21));
        radioButton_many = new QRadioButton(widget);
        radioButton_many->setObjectName(QString::fromUtf8("radioButton_many"));
        radioButton_many->setGeometry(QRect(190, 70, 117, 21));
        radioButton_fast = new QRadioButton(widget);
        radioButton_fast->setObjectName(QString::fromUtf8("radioButton_fast"));
        radioButton_fast->setGeometry(QRect(220, 120, 117, 21));
        radioButton_med = new QRadioButton(widget);
        radioButton_med->setObjectName(QString::fromUtf8("radioButton_med"));
        radioButton_med->setGeometry(QRect(220, 150, 117, 21));
        radioButton_slow = new QRadioButton(widget);
        radioButton_slow->setObjectName(QString::fromUtf8("radioButton_slow"));
        radioButton_slow->setGeometry(QRect(220, 180, 117, 21));

        retranslateUi(widget);

        QMetaObject::connectSlotsByName(widget);
    } // setupUi

    void retranslateUi(QWidget *widget)
    {
        widget->setWindowTitle(QCoreApplication::translate("widget", "Widget", nullptr));
        pushButton_connect->setText(QCoreApplication::translate("widget", "\346\243\200\346\237\245\350\277\236\346\216\245\347\212\266\346\200\201", nullptr));
        pushButton_start_cover->setText(QCoreApplication::translate("widget", "\345\274\200\345\247\213\345\275\225\345\210\266\347\202\271\345\207\273\344\275\215\347\275\256", nullptr));
        pushButton_one_click->setText(QCoreApplication::translate("widget", "\347\202\271\345\207\273\344\270\200\346\254\241\357\274\210\346\265\213\350\257\225\357\274\211", nullptr));
        pushButton_start_click->setText(QCoreApplication::translate("widget", "\346\214\201\347\273\255\347\202\271\345\207\273", nullptr));
        pushButton->setText(QCoreApplication::translate("widget", "\346\214\211\351\222\256\345\210\235\345\247\213\345\214\226\357\274\214\350\257\267\346\273\221\345\212\250\345\261\217\345\271\225", nullptr));
        radioButton_one->setText(QCoreApplication::translate("widget", "\345\215\225\351\203\250\346\234\272\345\231\250\346\250\241\345\274\217", nullptr));
        radioButton_many->setText(QCoreApplication::translate("widget", "\345\244\232\351\203\250\346\234\272\345\231\250\346\250\241\345\274\217", nullptr));
        radioButton_fast->setText(QCoreApplication::translate("widget", "\345\277\253", nullptr));
        radioButton_med->setText(QCoreApplication::translate("widget", "\344\270\255(\345\215\216\344\270\272)", nullptr));
        radioButton_slow->setText(QCoreApplication::translate("widget", "\346\205\242(\345\215\216\344\270\272)", nullptr));
    } // retranslateUi

};

namespace Ui {
    class widget: public Ui_widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
