#include "Wall.h"
#include <QGraphicsScene>

Wall::Wall(QGraphicsItem *parent): QGraphicsItem(parent), destructible(true) {
    sprite = QPixmap("C:/Users/Carlos/Pictures/Screenshots/imagen.png").scaled(spriteWidth, spriteHeight);
    rect = QRect(0, 0, spriteWidth, spriteHeight);
}

QRectF Wall::boundingRect() const {
    return QRectF(0, 0, spriteWidth, spriteHeight);
}

void Wall::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget) {
    Q_UNUSED(option);
    Q_UNUSED(widget);
    painter->drawPixmap(0, 0, sprite);
}

void Wall::destroy() {
    if (destructible) {
        scene()->removeItem(this);
        delete this;
    }
}

// Definición del método getRect
QRect Wall::getRect() const {
    return rect;
}
