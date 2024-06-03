#include "tank.h"

Tank::Tank(QGraphicsItem *parent): QGraphicsPixmapItem(parent), indiceSpriteActual(0) {
    // Cargar y dividir la imagen del tanque en sprites
    dividirSpriteTank(":/path/to/tank_image.png", 46.8, 46.1, spritesTank);
    // Inicializar el tanque con el primer sprite
    setPixmap(spritesTank[indiceSpriteActual]);
}

void Tank::keyPressEvent(QKeyEvent *event) {
    int stepSize = 10;
    switch (event->key()) {
        case Qt::Key_Left:
            if (pos().x() > 0) setPos(x() - stepSize, y());
            break;
        case Qt::Key_Right:
            if (pos().x() + pixmap().width() < scene()->width()) setPos(x() + stepSize, y());
            break;
        case Qt::Key_Up:
            if (pos().y() > 0) setPos(x(), y() - stepSize);
            break;
        case Qt::Key_Down:
            if (pos().y() + pixmap().height() < scene()->height()) setPos(x(), y() + stepSize);
            break;
        case Qt::Key_Space:
            shoot();
            break;
    }
}

void Tank::shoot() {
    // Crear y configurar un nuevo proyectil
    Bullet *bullet = new Bullet();
    bullet->setPos(x(), y());
    scene()->addItem(bullet);
}
