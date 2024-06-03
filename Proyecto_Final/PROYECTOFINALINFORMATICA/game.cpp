#include "game.h"
#include <QGraphicsPixmapItem>

Game::Game(QWidget *parent) : QGraphicsView(parent) {
    // Configurar la escena del juego
    scene = new QGraphicsScene(this);
    scene->setSceneRect(0, 0, 800, 600);
    setScene(scene);

    // Establecer la imagen de fondo
    setBackgroundBrush(QPixmap(":/images/background.png"));

    // Crear y añadir el tanque del jugador
    playerTank = new Tank();
    playerTank->setPos(scene->width() / 2, scene->height() - playerTank->pixmap().height());
    scene->addItem(playerTank);

    // Añadir muros
    for (int i = 0; i < 10; ++i) {
        Wall *wall = new Wall();
        wall->setPos(i * 50, scene->height() - wall->pixmap().height());
        scene->addItem(wall);
    }

    // Añadir tanques enemigos
    for (int i = 0; i < 5; ++i) {
        Tank *enemyTank = new Tank();
        enemyTank->setPos(i * 100, 0);
        scene()->addItem(enemyTank);
    }
}

void Game::start() {
    // Iniciar el juego
}

void Game::pause() {
    // Pausar el juego
}
