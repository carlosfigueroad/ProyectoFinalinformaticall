#include "Enemy.h"
#include "Bullet.h"
#include <QGraphicsScene>
#include <QTimer>

Enemy::Enemy(QGraphicsItem *parent): QObject(), QGraphicsItem(parent) {
    moveTimer = new QTimer(this);
    connect(moveTimer, SIGNAL(timeout()), this, SLOT(move()));
    moveTimer->start(1000);

    shootTimer = new QTimer(this);
    connect(shootTimer, SIGNAL(timeout()), this, SLOT(autoShoot()));
    shootTimer->start(2000);
}

void Enemy::detectPlayer(Tank *player) {
    this->player = player;
}

void Enemy::move() {
    if (player) {
        if (x() < player->x()) {
            setPos(x() + 1, y());
        } else if (x() > player->x()) {
            setPos(x() - 1, y());
        }
    }
}

void Enemy::autoShoot() {
    Bullet *bullet = new Bullet();
    bullet->setPos(x(), y());
    scene()->addItem(bullet);
}

QRectF Enemy::boundingRect() const {
    return QRectF(0, 0, Enemy::spriteWidth, Enemy::spriteHeight);
}

void Enemy::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget) {
    Q_UNUSED(option);
    Q_UNUSED(widget);
    painter->drawPixmap(0, 0, sprite);
}
