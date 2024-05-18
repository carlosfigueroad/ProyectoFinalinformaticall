#ifndef ENEMY_H
#define ENEMY_H

#include <QObject>
#include <QGraphicsItem>
#include <QPainter>
#include <QTimer> // Asegúrate de incluir QTimer
#include "Tank.h"

class Enemy : public QObject, public QGraphicsItem {
    Q_OBJECT
    Q_INTERFACES(QGraphicsItem) // Añade esta línea para solucionar la advertencia
public:
    Enemy(QGraphicsItem *parent=0);
    QRectF boundingRect() const override;
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget) override;
    void detectPlayer(Tank *player);

public slots:
    void move();
    void autoShoot();

private:
    QTimer *moveTimer;
    QTimer *shootTimer;
    Tank *player;
    QPixmap sprite; // Añade esta línea para el sprite del enemigo
    static const int spriteWidth = 32; // Añade esta línea para el ancho del sprite
    static const int spriteHeight = 32; // Añade esta línea para el alto del sprite
};

#endif // ENEMY_H
