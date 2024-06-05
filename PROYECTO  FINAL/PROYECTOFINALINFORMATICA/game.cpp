#include "game.h"
#include "wall.h"
#include <QGraphicsScene>
#include <QTimer>

Game::Game(QWidget *parent) : QGraphicsView(parent) {
    scene = new QGraphicsScene(this);
    setScene(scene);
    setFixedSize(1024, 768);
    scene->setSceneRect(0, 0, 1024, 768);

    playerTank = new Tank(":/imagentankazul.png");
    playerTank->setPos(512, 384);
    scene->addItem(playerTank);

    playerTank->setFlag(QGraphicsItem::ItemIsFocusable);
    playerTank->setFocus();

    QPixmap wallPixmap(":/wall.png");
    Wall *wall = new Wall(wallPixmap);
    wall->setPos(100, 100);
    scene->addItem(wall);
}

void Game::startGame() {
    // Iniciar el juego, puedes agregar más lógica aquí si es necesario
}

QGraphicsScene* Game::getScene() {
    return scene;
}
