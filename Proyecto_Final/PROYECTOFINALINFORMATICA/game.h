#ifndef GAME_H
#define GAME_H

#include <QGraphicsView>
#include <QGraphicsScene>
#include "tank.h"
#include "Bullet.h"
#include "wall.h"

class Game : public QGraphicsView {
public:
    Game(QWidget *parent = nullptr);

    QGraphicsScene *scene;
    Tank *playerTank;
    QList<Bullet *> bullets;
    QList<Wall *> walls;

    void start();
    void pause();
};

#endif // GAME_H
