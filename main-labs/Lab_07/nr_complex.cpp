#include "nr_complex.hpp"

Nr_complex :: Nr_complex(int r, int i) {

    real = r;
    imaginar = i;

}

Nr_complex :: Nr_complex(const Nr_complex &obj) {

    this -> real = obj.real;
    this -> imaginar = obj.imaginar;

}

Nr_complex& Nr_complex :: operator = (const Nr_complex &obj) {

    real = obj.real;
    imaginar = obj.imaginar;

    return *this;

}

double Nr_complex :: getValoare()const {

    double r;
    r = sqrt((this -> real) * (this -> real) + (this -> imaginar) * (this -> imaginar));
    return r;

}

std::ostream &operator << (std::ostream &dev, const Nr_complex &obj) {

    dev << "\t" << obj.real << " + " << obj.imaginar << "j" << '\n';
    return dev;

}

bool Nr_complex :: operator > (const Nr_complex &obj) {

    if ((*this).getValoare() > obj.getValoare())
        return true;
    else
        return false;

}

