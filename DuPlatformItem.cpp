#include "DuPlatformItem.h"
#include "DuGlobalDefines.h"
#include "DuUtil.h"
#include <QPainter>

DuPlatformItem::DuPlatformItem(int x, int y, int w, int h, int vx, int vy,
                               QGraphicsItem *parent)
    : DuIObjectItem(x, y, w, h, vx, vy, parent)
{   
}

void DuPlatformItem::move(int key)
{
    if (mx > 0 && key == Qt::Key_Left) {
        mvx = -DuUtil::abs(mvx);
        DuIObjectItem::move();
    } else if (mx < (XSIZE - WPLATFORM) && key == Qt::Key_Right) {
        mvx = +DuUtil::abs(mvx);
        DuIObjectItem::move();
    }
}

void DuPlatformItem::paint(QPainter *painter, const QStyleOptionGraphicsItem *,
                           QWidget *)
{
    painter->drawRect(mx, my, mw, mh);
}

