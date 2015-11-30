#include "widget.h"
#include "ui_widget.h"
#include <QPushButton>
#include <QLineEdit>
#include <QVBoxLayout>
#include <QLabel>
#include <QString>

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);

    plus = new QPushButton("+");
    plus->setFixedSize(25,25);
    operand_1 = new QLineEdit;
    operand_2 = new QLineEdit;
    result = new QLineEdit;
    l = new QLabel("result: ");
    layout = new QVBoxLayout;
    layout->addWidget(operand_1);
    layout->addWidget(plus);
    layout->addWidget(operand_2);
    layout->addWidget(l);
    layout->addWidget(result);
    layout->setAlignment(plus, Qt::AlignHCenter);
    this->setLayout(layout);
    connect(plus, SIGNAL(clicked()), this, SLOT(calculate()));
}

Widget::~Widget()
{
    delete ui;
}

void Widget::calculate()
{
    if (operand_1->text().isEmpty() || operand_2->text().isEmpty())
    {
        l->setText("ERROR !");
        return;
    }
    else
    {
        QString res("%1 + %2 = ");
        int a = operand_1->text().toInt();
        int b = operand_2->text().toInt();
        res = res.arg(a).arg(b);
        l->setText(res);
        result->setText(QString::number(a+b));
    }
}
