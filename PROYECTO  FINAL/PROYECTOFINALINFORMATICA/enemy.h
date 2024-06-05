#ifndef ENEMY_H
#define ENEMY_H

#include <QGraphicsPixmapItem>
#include <QTimer>
#include <QVector>
#include <QObject>

class Enemy : public QObject, public QGraphicsPixmapItem {
    Q_OBJECT
public:
    enum TankType { Pink, Yellow, Green };

    Enemy(TankType type, QGraphicsItem *parent = nullptr);

public slots:
    void move();
    void shoot();
    void changeDirection();

private:
    QTimer *moveTimer;
    QTimer *shootTimer;
    QTimer *directionTimer;
    int direction; // Dirección actual del movimiento
    QVector<QPixmap> sprites; // Sprites para la animación
    int currentSpriteIndex;
    void loadSprites(TankType type);
};

#endif // ENEMY_H
