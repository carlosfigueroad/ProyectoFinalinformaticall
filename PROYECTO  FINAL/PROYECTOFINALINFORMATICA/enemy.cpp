#include "enemy.h"
#include "Bullet.h"
#include <QRandomGenerator>
#include <QGraphicsScene>

Enemy::Enemy(TankType type, QGraphicsItem *parent)
    : QGraphicsPixmapItem(parent), direction(0), currentSpriteIndex(0) {

    // Cargar los sprites correspondientes al tipo de tanque
    loadSprites(type);

    // Inicializar el tanque con el primer sprite
    setPixmap(sprites[currentSpriteIndex]);

    // Configurar el timer para el movimiento
    moveTimer = new QTimer(this);
    connect(moveTimer, &QTimer::timeout, this, &Enemy::move);
    moveTimer->start(100);

    // Configurar el timer para el disparo
    shootTimer = new QTimer(this);
    connect(shootTimer, &QTimer::timeout, this, &Enemy::shoot);
    shootTimer->start(1000);

    // Configurar el timer para cambiar de dirección
    directionTimer = new QTimer(this);
    connect(directionTimer, &QTimer::timeout, this, &Enemy::changeDirection);
    directionTimer->start(2000);
}

void Enemy::loadSprites(TankType type) {
    QString spritePath;
    switch (type) {
        case Pink:
            spritePath = ":/imagentankrosa.png";
            break;
        case Yellow:
            spritePath = ":/imagentankamarillo.png";
            break;
        case Green:
            spritePath = ":/imagentankverde.png";
            break;
    }

    QPixmap spriteSheet(spritePath);
    int spriteWidth = 377 / 8; // Ancho de cada sprite
    int spriteHeight = 373 / 8; // Alto de cada sprite
    for (int i = 0; i < 8; ++i) {
        for (int j = 0; j < 8; ++j) {
            sprites.append(spriteSheet.copy(j * spriteWidth, i * spriteHeight, spriteWidth, spriteHeight));
        }
    }
}

void Enemy::move() {
    // Mover el enemigo en la dirección actual
    switch (direction) {
        case 0: // Arriba
            setPos(x(), y() - 10);
            break;
        case 1: // Abajo
            setPos(x(), y() + 10);
            break;
        case 2: // Izquierda
            setPos(x() - 10, y());
            break;
        case 3: // Derecha
            setPos(x() + 10, y());
            break;
    }

    // Actualizar sprite para animación
    currentSpriteIndex = (currentSpriteIndex + 1) % sprites.size();
    setPixmap(sprites[currentSpriteIndex]);
}

void Enemy::shoot() {
    // Crear y configurar un nuevo proyectil
    Bullet *bullet = new Bullet();
    bullet->setPos(x(), y() + pixmap().height());
    scene()->addItem(bullet);
}

void Enemy::changeDirection() {
    // Cambiar a una dirección aleatoria
    direction = QRandomGenerator::global()->bounded(4);
}
