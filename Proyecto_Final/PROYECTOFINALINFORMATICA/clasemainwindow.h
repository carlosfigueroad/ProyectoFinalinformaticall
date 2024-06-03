#ifndef CLASSMAINWINDOW_H
#define CLASSMAINWINDOW_H

#include <QMainWindow>
#include "game.h"

class CLASEMainWindow : public QMainWindow {  // Verifica que el nombre sea correcto
    Q_OBJECT
public:
    CLASEMainWindow(QWidget *parent = nullptr);
private:
    Game *game;
};

#endif // CLASSMAINWINDOW_H
