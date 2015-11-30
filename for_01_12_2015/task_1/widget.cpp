#include "widget.h"
#include "ui_widget.h"
#include <QPushButton>
#include <QHBoxLayout>

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);

    QPushButton *closeIt = new QPushButton("&Close me!");
    closeIt->setFixedSize(100, 25);
    QHBoxLayout *layout = new QHBoxLayout;
    layout->addWidget(closeIt);
    this->setLayout(layout);
    connect(closeIt, SIGNAL(clicked()), this, SLOT(close()));
}

Widget::~Widget()
{
    delete ui;
}
