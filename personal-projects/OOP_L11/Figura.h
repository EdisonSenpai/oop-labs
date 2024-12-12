#ifndef FIGURA_H
#define FIGURA_H

#include "Point.h"

class Figura {
protected:
    vector<Point> puncte;

public:
    Figura(const vector<Point>&);

    Point getCenter() const;

    double getDist() const;

    virtual void afisare() const;

};

#endif // FIGURA_H
