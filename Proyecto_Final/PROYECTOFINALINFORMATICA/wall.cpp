#include "wall.h"

Wall::Wall(QGraphicsItem *parent) : QGraphicsPixmapItem(parent), durability(3) {
    // Establecer la imagen del muro
    setPixmap(QPixmap("::/imagenmuros.png"));
}

void Wall::hit() {
    durability--;
    if (durability <= 0) {
        scene()->removeItem(this);
        delete this;
    }
}
