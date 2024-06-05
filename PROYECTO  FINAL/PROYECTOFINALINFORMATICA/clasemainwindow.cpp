#include "clasemainwindow.h"
#include "ui_clasemainwindow.h"

CLASEMainWindow::CLASEMainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::CLASEMainWindow),
    game(new Game(this))
{
    ui->setupUi(this);
}

CLASEMainWindow::~CLASEMainWindow() {
    delete ui;
}

void CLASEMainWindow::startGame() {
    ui->graphicsView->setScene(game->getScene());
    ui->graphicsView->fitInView(game->getScene()->sceneRect(), Qt::KeepAspectRatio);
}
