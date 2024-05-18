#ifndef GAME_H
#define GAME_H

#include <QGraphicsView>
#include <QGraphicsScene>
#include "Tank.h"
#include "Enemy.h"
#include "Wall.h"
#include "Bullet.h"

class Game : public QGraphicsView {
public:
    Game(QWidget *parent = 0);

    QGraphicsScene *scene;
    Tank *playerTank;
    QList<Enemy *> enemies;
    QList<Bullet *> bullets;
    QList<Wall *> walls; // Añade una lista de muros
};

#endif // GAME_H
