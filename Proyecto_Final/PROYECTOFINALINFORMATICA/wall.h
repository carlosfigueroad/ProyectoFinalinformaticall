#ifndef WALL_H
#define WALL_H

#include <QGraphicsPixmapItem>

class Wall : public QGraphicsPixmapItem {
public:
    Wall(QGraphicsItem *parent = nullptr);
    void hit(); // Método para manejar cuando un muro es golpeado por un proyectil
private:
    int durability; // Durabilidad del muro
};

#endif // WALL_H
