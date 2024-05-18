#include "Game.h"
#include "Tank.h"
#include "Bullet.h"
#include "Enemy.h"
#include "Wall.h"
#include <QGraphicsScene>
#include <QGraphicsItem>

Game::Game(QWidget *parent): QGraphicsView(parent) {
    // Crea la escena
    scene = new QGraphicsScene(this);
    scene->setSceneRect(0,0,800,600); // Ajusta el tamaño de la escena
    setScene(scene);

    // Crea y añade el tanque del jugador
    playerTank = new Tank();
    playerTank->setPos(scene->width()/2, scene->height() - playerTank->rect().height());
    scene->addItem(playerTank);

    // Hace que el tanque del jugador sea el objeto activo para recibir eventos de teclado
    playerTank->setFlag(QGraphicsItem::ItemIsFocusable);
    playerTank->setFocus();

    // Añade enemigos
    for (int i = 0; i < 5; ++i) {
        Enemy *enemy = new Enemy();
        enemy->setPos(i * 100, 0);
        scene->addItem(enemy);
    }

    // Añade paredes
    for (int i = 0; i < 10; ++i) {
        Wall *wall = new Wall();
        wall->setPos(i * 50, scene->height() - wall->getRect().height());
        scene->addItem(wall);
    }

    // Carga y divide la hoja de sprites
    QPixmap spriteSheet(":/path/to/spritesheet.png");
    int spriteWidth = 32;
    int spriteHeight = 32;
    QVector<QPixmap> sprites;

    for (int y = 0; y < spriteSheet.height(); y += spriteHeight) {
        for (int x = 0; x < spriteSheet.width(); x += spriteWidth) {
            QPixmap sprite = spriteSheet.copy(x, y, spriteWidth, spriteHeight);
            sprites.append(sprite);
        }
    }
}
