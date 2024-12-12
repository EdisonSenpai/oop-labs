#include "Patrat.h"

Patrat::Patrat(const vector<Point>& puncte) : Figura(puncte) {}

void Patrat::afisare() const {

    cout << "Patrat -> ";

    Figura::afisare();

}
