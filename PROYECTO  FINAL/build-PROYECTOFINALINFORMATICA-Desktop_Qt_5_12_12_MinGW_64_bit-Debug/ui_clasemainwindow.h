/********************************************************************************
** Form generated from reading UI file 'clasemainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CLASEMAINWINDOW_H
#define UI_CLASEMAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CLASEMainWindow
{
public:
    QWidget *centralwidget;
    QGraphicsView *graphicsView;
    QPushButton *pushButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *CLASEMainWindow)
    {
        if (CLASEMainWindow->objectName().isEmpty())
            CLASEMainWindow->setObjectName(QString::fromUtf8("CLASEMainWindow"));
        CLASEMainWindow->resize(800, 600);
        centralwidget = new QWidget(CLASEMainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        graphicsView = new QGraphicsView(centralwidget);
        graphicsView->setObjectName(QString::fromUtf8("graphicsView"));
        graphicsView->setGeometry(QRect(110, 60, 401, 301));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(260, 360, 80, 21));
        CLASEMainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(CLASEMainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 20));
        CLASEMainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(CLASEMainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        CLASEMainWindow->setStatusBar(statusbar);

        retranslateUi(CLASEMainWindow);

        QMetaObject::connectSlotsByName(CLASEMainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *CLASEMainWindow)
    {
        CLASEMainWindow->setWindowTitle(QApplication::translate("CLASEMainWindow", "CLASEMainWindow", nullptr));
        pushButton->setText(QApplication::translate("CLASEMainWindow", "start", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CLASEMainWindow: public Ui_CLASEMainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CLASEMAINWINDOW_H
