#ifndef TANK_H
#define TANK_H

#include <QGraphicsPixmapItem>
#include <QKeyEvent>
#include "dividir.h" // Asegúrate de incluir el archivo de cabecera donde se declara dividirSpriteTank

class Tank : public QGraphicsPixmapItem {
public:
    Tank(QGraphicsItem *parent=0);
    void keyPressEvent(QKeyEvent *event);
    void shoot();
    // Métodos adicionales para manejar los sprites y la lógica del tanque
private:
    QVector<QPixmap> spritesTank; // Vector para almacenar los sprites del tanque
    int indiceSpriteActual; // Índice para el sprite actual del tanque
    // Atributos adicionales como posición, salud, etc.
};

#endif // TANK_H
