#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    ui->widget->hide();
    ui->pushButton_2->hide();
}

Widget::~Widget()
{
    delete ui;
}
