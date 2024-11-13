#include "fractie.hpp"

Fractie :: Fractie(int aa, int bb) {

    a = aa;
    b = bb;

}

Fractie :: Fractie(const Fractie &obj) {

    this -> a = obj.a;
    this -> b = obj.b;

}

double Fractie :: getValoare()const {

    double f;

    if (b)
        return f = (double)a / b;
    else
        return 0;

}

bool Fractie :: operator > (const Fractie &obj) {

    if ((*this).getValoare() > obj.getValoare())
        return true;
    else
        return false;

}

std::ostream &operator << (std::ostream &dev, const Fractie &obj) {

    if (obj.b)
        dev << obj.a << "/" << obj.b;
    else
        dev << "Error! It was divided by 0!";

    return dev;

}
