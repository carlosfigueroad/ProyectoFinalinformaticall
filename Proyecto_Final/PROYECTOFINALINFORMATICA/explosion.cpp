#include "explosion.h"
#include "dividir.h"
#include <QTimer>
#include <QObject>
#include <QGraphicsScene>

Explosion::Explosion(QGraphicsItem *parent) : QGraphicsPixmapItem(parent), currentSpriteIndex(0) {
    // Cargar y dividir la imagen de la explosión en sprites
    dividirSprite(QPixmap(":/explosion.png"), 240, 157, sprites);
    // Inicializar la explosión con el primer sprite
    setPixmap(sprites[currentSpriteIndex]);

    // Configurar el timer para la animación
    animationTimer = new QTimer(scene());
    QObject::connect(animationTimer, &QTimer::timeout, this, &Explosion::animate);
    animationTimer->start(100);
}

void Explosion::animate() {
    // Cambiar al siguiente sprite
    currentSpriteIndex = (currentSpriteIndex + 1) % sprites.size();
    setPixmap(sprites[currentSpriteIndex]);

    // Si hemos llegado al final de la animación, eliminar la explosión
    if (currentSpriteIndex == sprites.size() - 1) {
        if (scene()) {
            scene()->removeItem(this);
        }
        delete this;
    }
}
