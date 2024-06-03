#include "dividir.h"

void dividirSprite(const QPixmap &imagen, int numFilas, int numColumnas, QVector<QPixmap> &sprites) {
    int anchoSprite = imagen.width() / numColumnas;
    int altoSprite = imagen.height() / numFilas;

    for (int y = 0; y < numFilas; ++y) {
        for (int x = 0; x < numColumnas; ++x) {
            sprites.append(imagen.copy(x * anchoSprite, y * altoSprite, anchoSprite, altoSprite));
        }
    }
}
