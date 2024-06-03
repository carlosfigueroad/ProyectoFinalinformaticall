#include "clasemainwindow.h"
#include "ui_clasemainwindow.h"

CLASEMainWindow::CLASEMainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::CLASEMainWindow)
{
    ui->setupUi(this);
}

CLASEMainWindow::~CLASEMainWindow()
{
    delete ui;
}
