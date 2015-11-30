/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 5.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QRadioButton *redButton;
    QRadioButton *yellowButton;
    QRadioButton *greenButton;
    QHBoxLayout *horizontalLayout;
    QPushButton *startButton;
    QPushButton *stopButton;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QStringLiteral("Widget"));
        Widget->resize(400, 300);
        verticalLayoutWidget_2 = new QWidget(Widget);
        verticalLayoutWidget_2->setObjectName(QStringLiteral("verticalLayoutWidget_2"));
        verticalLayoutWidget_2->setGeometry(QRect(50, 20, 301, 251));
        verticalLayout_2 = new QVBoxLayout(verticalLayoutWidget_2);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        redButton = new QRadioButton(verticalLayoutWidget_2);
        redButton->setObjectName(QStringLiteral("redButton"));
        redButton->setAutoFillBackground(true);
        redButton->setStyleSheet(QStringLiteral("background-color:red"));

        verticalLayout->addWidget(redButton);

        yellowButton = new QRadioButton(verticalLayoutWidget_2);
        yellowButton->setObjectName(QStringLiteral("yellowButton"));
        yellowButton->setAutoFillBackground(false);
        yellowButton->setStyleSheet(QStringLiteral("background-color:yellow"));

        verticalLayout->addWidget(yellowButton);

        greenButton = new QRadioButton(verticalLayoutWidget_2);
        greenButton->setObjectName(QStringLiteral("greenButton"));
        greenButton->setAutoFillBackground(false);
        greenButton->setStyleSheet(QStringLiteral("background-color:green"));

        verticalLayout->addWidget(greenButton);


        verticalLayout_2->addLayout(verticalLayout);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        startButton = new QPushButton(verticalLayoutWidget_2);
        startButton->setObjectName(QStringLiteral("startButton"));

        horizontalLayout->addWidget(startButton);

        stopButton = new QPushButton(verticalLayoutWidget_2);
        stopButton->setObjectName(QStringLiteral("stopButton"));

        horizontalLayout->addWidget(stopButton);


        verticalLayout_2->addLayout(horizontalLayout);

        verticalLayoutWidget_2->raise();

        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QApplication::translate("Widget", "Widget", 0));
        redButton->setText(QApplication::translate("Widget", "RED", 0));
        yellowButton->setText(QApplication::translate("Widget", "YELLOW", 0));
        greenButton->setText(QApplication::translate("Widget", "GREEN", 0));
        startButton->setText(QApplication::translate("Widget", "Start", 0));
        stopButton->setText(QApplication::translate("Widget", "Stop", 0));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
