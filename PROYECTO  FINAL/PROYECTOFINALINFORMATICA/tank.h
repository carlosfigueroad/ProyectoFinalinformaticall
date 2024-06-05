#ifndef TANK_H
#define TANK_H

#include <QGraphicsPixmapItem>
#include <QObject>
#include <QVector>
#include <QPixmap>

class Tank : public QObject, public QGraphicsPixmapItem {
    Q_OBJECT
public:
    Tank(const QString &imagePath, QGraphicsItem *parent = nullptr);

public slots:
    void move();
    void shoot();
    void changeDirection(int direction);

private:
    QVector<QPixmap> sprites;
    int currentFrame;
    int direction;
    QTimer *timer;
};

#endif // TANK_H
