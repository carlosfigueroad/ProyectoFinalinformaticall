#ifndef WALL_H
#define WALL_H
#pragma once
#include <QGraphicsItem>
#include <QPixmap>
#include <QPainter>

class Wall : public QGraphicsItem {
public:
    Wall(QGraphicsItem *parent=0);
    QRectF boundingRect() const override;
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget) override;
    void destroy();
    QRect getRect() const; // Declaración del método getRect

private:
    bool destructible;
    QPixmap sprite;
    int spriteWidth = 50;
    int spriteHeight = 50;
    QRect rect;
};

#endif // WALL_H
