/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QPushButton *pb50;
    QPushButton *pb100;
    QPushButton *pb500;
    QLCDNumber *lcdNumber;
    QPushButton *pb10;
    QPushButton *pbCoffee;
    QPushButton *pbTea;
    QPushButton *pbCoke;
    QPushButton *pbReturn;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QString::fromUtf8("Widget"));
        Widget->resize(507, 194);
        pb50 = new QPushButton(Widget);
        pb50->setObjectName(QString::fromUtf8("pb50"));
        pb50->setGeometry(QRect(10, 90, 71, 31));
        pb100 = new QPushButton(Widget);
        pb100->setObjectName(QString::fromUtf8("pb100"));
        pb100->setGeometry(QRect(10, 50, 71, 31));
        pb500 = new QPushButton(Widget);
        pb500->setObjectName(QString::fromUtf8("pb500"));
        pb500->setGeometry(QRect(10, 10, 71, 31));
        lcdNumber = new QLCDNumber(Widget);
        lcdNumber->setObjectName(QString::fromUtf8("lcdNumber"));
        lcdNumber->setGeometry(QRect(100, 10, 381, 61));
        pb10 = new QPushButton(Widget);
        pb10->setObjectName(QString::fromUtf8("pb10"));
        pb10->setGeometry(QRect(10, 130, 71, 31));
        pbCoffee = new QPushButton(Widget);
        pbCoffee->setObjectName(QString::fromUtf8("pbCoffee"));
        pbCoffee->setEnabled(false);
        pbCoffee->setGeometry(QRect(100, 90, 101, 61));
        pbTea = new QPushButton(Widget);
        pbTea->setObjectName(QString::fromUtf8("pbTea"));
        pbTea->setEnabled(false);
        pbTea->setGeometry(QRect(210, 90, 101, 61));
        pbCoke = new QPushButton(Widget);
        pbCoke->setObjectName(QString::fromUtf8("pbCoke"));
        pbCoke->setEnabled(false);
        pbCoke->setGeometry(QRect(320, 90, 101, 61));
        pbReturn = new QPushButton(Widget);
        pbReturn->setObjectName(QString::fromUtf8("pbReturn"));
        pbReturn->setGeometry(QRect(430, 90, 61, 61));

        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QApplication::translate("Widget", "Widget", nullptr));
        pb50->setText(QApplication::translate("Widget", "50", nullptr));
        pb100->setText(QApplication::translate("Widget", "100", nullptr));
        pb500->setText(QApplication::translate("Widget", "500", nullptr));
        pb10->setText(QApplication::translate("Widget", "10", nullptr));
        pbCoffee->setText(QApplication::translate("Widget", "Coffee(100)", nullptr));
        pbTea->setText(QApplication::translate("Widget", "Tea(150)", nullptr));
        pbCoke->setText(QApplication::translate("Widget", "Coke(200)", nullptr));
        pbReturn->setText(QApplication::translate("Widget", "Return", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
