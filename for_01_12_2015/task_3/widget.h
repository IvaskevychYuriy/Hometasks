#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>

class QLineEdit;
class QPushButton;
class QLabel;
class QVBoxLayout;
class QString;

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
    QLineEdit *operand_1, *operand_2, *result;
    QLabel *l;
    QVBoxLayout *layout;
    QPushButton *plus;

private slots:
    void calculate();

};

#endif // WIDGET_H
