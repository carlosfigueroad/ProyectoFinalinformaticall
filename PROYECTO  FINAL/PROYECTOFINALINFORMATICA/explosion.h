#ifndef EXPLOSION_H
#define EXPLOSION_H

#include <QGraphicsPixmapItem>
#include <QTimer>
#include <QObject>

class Explosion : public QObject, public QGraphicsPixmapItem {
    Q_OBJECT
public:
    Explosion(QGraphicsItem *parent = nullptr);
public slots:
    void animate();
private:
    QVector<QPixmap> sprites;
    int currentSpriteIndex;
    QTimer *animationTimer;
};

#endif // EXPLOSION_H
