#include "widget.h"
#include "ui_widget.h"
#include <QMessageBox>
#include <QString>



Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
}

Widget::~Widget()
{
    delete ui;
}

void Widget::changeMoney(int n)
{
    money += n;
    if(money >= 100)
    {
        ui->pbCoffee->setEnabled(true);
    }
    else
    {
        ui->pbCoffee->setEnabled(false);
    }

    if(money >= 150)
    {
        ui->pbTea->setEnabled(true);
    }
    else
    {
        ui->pbTea->setEnabled(false);
    }

    if(money >= 200)
    {
        ui->pbCoke->setEnabled(true);
    }
    else
    {
        ui->pbCoke->setEnabled(false);
    }
    ui->lcdNumber->display(money);
}

void Widget::returnMoney(int n, int i)
{
    if(money >= n)
    {
        returnNumber[i] = money/n;
        money %= n;
    }
}

void Widget::on_pb10_clicked()
{
   changeMoney(10);
}

void Widget::on_pb50_clicked()
{
    changeMoney(50);
}

void Widget::on_pb100_clicked()
{
    changeMoney(100);
}

void Widget::on_pb500_clicked()
{
    changeMoney(500);
}



void Widget::on_pbCoffee_clicked()
{
    changeMoney(-100);
}

void Widget::on_pbCoke_clicked()
{
    changeMoney(-200);
}

void Widget::on_pbTea_clicked()
{
    changeMoney(-150);
}

void Widget::on_pbReturn_clicked()
{
    for(int i = 3; i >= 0; i --)
    {
        returnMoney(danwe[i] ,i);
    }

    auto str =  QString("10 : %1$ \n50 : %2$ \n100 : %3$ \n 500 : %4$\n").arg(returnNumber[0]).arg(returnNumber[1]).arg(returnNumber[2]).arg(returnNumber[3]);

    QMessageBox msg;
    msg.information(nullptr,"Return Coin",str);

    for(int i = 3; i >= 0; i --)
    {
        returnNumber[i] = 0;
    }
}
