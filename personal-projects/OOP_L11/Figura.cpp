#include "Figura.h"

Figura::Figura(const vector<Point>& puncte) : puncte(puncte) {}

Point Figura::getCenter() const {

    double sumX = 0.0, sumY = 0.0;

    for (const auto& p : puncte) {

        sumX += p.getX();
        sumY += p.getY();

    }

    double x_m = sumX / puncte.size();
    double y_m = sumY / puncte.size();

    return Point(x_m, y_m);

}

double Figura::getDist() const {

    Point center = getCenter();

    return sqrt(center.getX() * center.getX() + center.getY() * center.getY());

}

void Figura::afisare() const {

    Point center = getCenter();

    cout << "Centru: (" << center.getX() << ", " << center.getY() << "), "
        << "Distanta de la origine: " << getDist() << std::endl;

}