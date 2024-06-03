#include "Bullet.h"
#include <QTimer>

Bullet::Bullet(QGraphicsItem *parent) : QObject(parent), QGraphicsPixmapItem(parent) {
    // Establecer la imagen del proyectil
    setPixmap(QPixmap(":/proyectil.png"));

    // Conectar el movimiento del proyectil con un timer
    QTimer *timer = new QTimer(this);
    connect(timer, &QTimer::timeout, this, &Bullet::move);
    timer->start(50);
}

void Bullet::move() {
    // Mover el proyectil hacia arriba
    setPos(x(), y() - 10);
    if (pos().y() + pixmap().height() < 0) {
        scene()->removeItem(this);
        delete this;
    }
}
