#include "MainWindow.h"
#include "ui_MainWindow.h"
#include "DuArkanoid.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    mArkanoid = new DuArkanoid(ui->graphicsView, this);
    setCentralWidget(ui->graphicsView);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_actionIniciar_juego_triggered()
{
    mArkanoid->startGame();
}

void MainWindow::on_actionQuitar_triggered()
{
    mArkanoid->stopGame();
    close();
}
