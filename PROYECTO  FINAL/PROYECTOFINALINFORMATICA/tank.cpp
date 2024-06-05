#include "tank.h"
#include "Bullet.h"
#include <QTimer>
#include <QGraphicsScene>
#include "dividir.h"

Tank::Tank(const QString &imagePath, QGraphicsItem *parent)
    : QObject(), QGraphicsPixmapItem(parent), currentFrame(0), direction(0) {
    dividirSprite(QPixmap(imagePath), 1, 4, sprites);
    setPixmap(sprites[currentFrame]);

    // Creación del objeto QTimer y conexión de la señal timeout al slot move
    timer = new QTimer(this);
    connect(timer, &QTimer::timeout, this, &Tank::move);
    timer->start(50);
}

void Tank::move() {
    // Lógica de movimiento del tanque
    // Actualiza la posición o cualquier otra lógica de movimiento
    setPixmap(sprites[currentFrame]);
}

void Tank::shoot() {
    Bullet *bullet = new Bullet();
    bullet->setPos(x() + pixmap().width() / 2, y());
    scene()->addItem(bullet);
}

void Tank::changeDirection(int newDirection) {
    direction = newDirection;
    currentFrame = direction;
    setPixmap(sprites[currentFrame]);
}

