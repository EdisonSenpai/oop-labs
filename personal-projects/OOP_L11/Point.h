#ifndef POINT_H
#define POINT_H

#include "Libs.h"

class Point {
private:
    double x;
    double y;

public:
    Point(double x = 0.0, double y = 0.0);

    double getX() const;
    double getY() const;

    void setX(double);
    void setY(double);

};

#endif // POINT_H
