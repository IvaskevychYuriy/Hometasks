#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>

class QTimer;

namespace Ui {
class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent = 0);
    ~Widget();

private:
    Ui::Widget *ui;
    int counter;
    QTimer *timer;

private slots:
    void change();
};

#endif // WIDGET_H
