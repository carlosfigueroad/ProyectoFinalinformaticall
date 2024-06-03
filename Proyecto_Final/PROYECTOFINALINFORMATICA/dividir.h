#ifndef DIVIDIR_H
#define DIVIDIR_H

#include <QPixmap>
#include <QVector>

// Función para dividir una imagen en sprites
void dividirSprite(const QPixmap &imagen, int numFilas, int numColumnas, QVector<QPixmap> &sprites);

#endif // DIVIDIR_H
