#include "widget.h"
#include "ui_widget.h"
#include <QTimer>

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);

    counter = 0;
    timer = new QTimer(this);
    timer->setInterval(1000);
    connect(ui->startButton, SIGNAL(clicked()), timer, SLOT(start()));
    connect(ui->stopButton, SIGNAL(clicked()), timer, SLOT(stop()));
    connect(timer, SIGNAL(timeout()), this, SLOT(change()));
}

Widget::~Widget()
{
    delete ui;
}

void Widget::change()
{
    switch(counter)
    {
    case 0: ui->redButton->setChecked(true); break;
    case 1: ui->yellowButton->setChecked(true); break;
    case 2: ui->greenButton->setChecked(true); break;
    default: break;
    }
    counter = (++counter)%3;
}
