#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui
{
class MainWindow;
}

class DuArkanoid;

class MainWindow : public QMainWindow
{
    Q_OBJECT
public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
private slots:
    void on_actionIniciar_juego_triggered();
    void on_actionQuitar_triggered();
private:
    Ui::MainWindow *ui;
    DuArkanoid *mArkanoid;
};

#endif // MAINWINDOW_H
