#include "DuArkanoid.h"
#include "DuGraphicsScene.h"
#include <QGraphicsView>

DuArkanoid::DuArkanoid(QGraphicsView *graphicsView, QObject *parent)
    : QObject(parent)
{
    mScene = new DuGraphicsScene(this);
    graphicsView->setScene(mScene);
}

void DuArkanoid::startGame()
{
    mScene->startScene();
}

void DuArkanoid::stopGame()
{
    mScene->stopScene();
}

