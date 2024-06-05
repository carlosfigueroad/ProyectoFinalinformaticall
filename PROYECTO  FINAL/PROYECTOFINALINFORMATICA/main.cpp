#include <QApplication>
#include <QGraphicsView>
#include <QGraphicsScene>
#include "enemy.h"

int main(int argc, char *argv[]) {
    QApplication app(argc, argv);

    // Crear una vista de gráficos
    QGraphicsView view;

    // Crear una escena de gráficos
    QGraphicsScene *scene = new QGraphicsScene();

    // Agregar los enemigos a la escena
    Enemy *pinkTank = new Enemy(Enemy::Pink);
    pinkTank->setPos(50, 50);  // Posicionar el tanque rosa
    scene->addItem(pinkTank);

    Enemy *yellowTank = new Enemy(Enemy::Yellow);
    yellowTank->setPos(150, 150);  // Posicionar el tanque amarillo
    scene->addItem(yellowTank);

    Enemy *greenTank = new Enemy(Enemy::Green);
    greenTank->setPos(250, 250);  // Posicionar el tanque verde
    scene->addItem(greenTank);

    // Establecer la escena en la vista
    view.setScene(scene);

    // Mostrar la vista
    view.show();

    return app.exec();
}
