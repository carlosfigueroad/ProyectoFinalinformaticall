#include "dividir.h"

void dividirSprite(const QPixmap &imagen, int numFilas, int numColumnas, QVector<QPixmap> &sprites) {
    int ancho = imagen.width() / numColumnas;
    int alto = imagen.height() / numFilas;

    for (int fila = 0; fila < numFilas; ++fila) {
        for (int col = 0; col < numColumnas; ++col) {
            sprites.append(imagen.copy(col * ancho, fila * alto, ancho, alto));
        }
    }
}
