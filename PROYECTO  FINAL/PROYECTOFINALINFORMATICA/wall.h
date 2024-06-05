#ifndef WALL_H
#define WALL_H

#include <QGraphicsPixmapItem>
#include <QPixmap>

class Wall : public QGraphicsPixmapItem {
public:
    Wall(const QPixmap &pixmap, QGraphicsItem *parent = nullptr);
};

#endif // WALL_H
