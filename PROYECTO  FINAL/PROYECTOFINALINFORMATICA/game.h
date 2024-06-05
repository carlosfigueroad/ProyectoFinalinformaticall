#ifndef GAME_H
#define GAME_H

#include <QGraphicsView>
#include <QWidget>
#include <QGraphicsScene>
#include "tank.h"

class Game : public QGraphicsView {
    Q_OBJECT
public:
    Game(QWidget *parent = nullptr);
    void startGame();
    QGraphicsScene* getScene();

private:
    QGraphicsScene *scene;
    Tank *playerTank;
};

#endif // GAME_H
