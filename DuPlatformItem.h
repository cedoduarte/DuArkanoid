#ifndef DUPLATFORMITEM_H
#define DUPLATFORMITEM_H

#include "DuIObjectItem.h"

class DuPlatformItem : public DuIObjectItem
{
public:
    DuPlatformItem(int x, int y, int w, int h, int vx, int vy,
                   QGraphicsItem *parent = nullptr);
    void move(int key);
protected:
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option,
               QWidget *widget = nullptr) override;
};

#endif // DUPLATFORMITEM_H
