#include "dividir.h"

void dividir(const QString &spriteSheetPath, int spriteWidth, int spriteHeight, QVector<QPixmap> &sprites) {
    QPixmap spriteSheet(spriteSheetPath);

    for (int y = 0; y < spriteSheet.height(); y += spriteHeight) {
        for (int x = 0; x < spriteSheet.width(); x += spriteWidth) {
            QPixmap sprite = spriteSheet.copy(x, y, spriteWidth, spriteHeight);
            sprites.append(sprite);
        }
    }
}
