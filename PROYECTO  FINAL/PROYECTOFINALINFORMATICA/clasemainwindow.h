#ifndef CLASEMAINWINDOW_H
#define CLASEMAINWINDOW_H

#include <QMainWindow>
#include "game.h"

namespace Ui {
class CLASEMainWindow;
}

class CLASEMainWindow : public QMainWindow {
    Q_OBJECT

public:
    explicit CLASEMainWindow(QWidget *parent = nullptr);
    ~CLASEMainWindow();

private slots:
    void startGame();

private:
    Ui::CLASEMainWindow *ui;
    Game *game;
};

#endif // CLASEMAINWINDOW_H
