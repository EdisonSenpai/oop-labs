#include "fractie.hpp"

Fractie :: Fractie (int aa, int bb) {

    this -> a = aa;
    this -> b = bb;

}

Fractie :: Fractie (const Fractie &obj) {

    this -> a = obj.a;
    this -> b = obj.b;

}

Fractie :: ~Fractie () {

    //cout << "\n\nS-a apelat destructorul.\n";

}

double Fractie :: getValoare ()const {

    return (double) this -> a / this -> b;

}

Fractie Fractie :: getInv ()const {

    Fractie temp;

    temp.a = this -> b;
    temp.b = this -> a;

    return temp;

}

void Fractie :: setdata (int val_1, int val_2) {

    this -> a = val_1;
    this -> b = val_2;

}

float Fractie :: getA ()const {

    return (float) this -> a;

}

float Fractie :: getB ()const {

    return (float) this -> b;

}

void Fractie :: afisareFractie () {

    cout << "f = " << this -> a << "/" << this -> b;

}

Fractie operator + (const Fractie &f_1, const Fractie &f_2) {

    Fractie sum;

    sum.a = f_1.a * f_2.b + f_2.a * f_1.b;
    sum.b = f_1.b * f_2.b;

    return sum;

}

Fractie operator - (const Fractie &f_1, const Fractie &f_2) {

    Fractie dif;

    dif.a = f_1.a * f_2.b - f_2.a * f_1.b;
    dif.b = f_1.b * f_2.b;

    return dif;

}

Fractie operator * (const Fractie &f_1, const Fractie &f_2) {

    Fractie prod;

    prod.a = f_1.a * f_2.a;
    prod.b = f_1.b * f_2.b;

    return prod;

}

Fractie operator / (const Fractie &f_1, const Fractie &f_2) {

    Fractie div;

    div.a = f_1.a * f_2.b;
    div.b = f_1.b * f_2.a;

    return div;

}

Fractie operator - (const Fractie &f) {

    Fractie sign;

    sign.a = -f.a;
    sign.b = f.b;

    return sign;

}

Fractie& Fractie :: operator += (const Fractie &f) {

    a = a * f.b + b * f.a;
    b = b * f.b;

    return *this;

}

Fractie& Fractie :: operator -= (const Fractie &f) {

    a = a * f.b - b * f.a;
    b = b * f.b;

    return *this;

}
Fractie& Fractie :: operator *= (const Fractie &f) {

    a = a * f.a;
    b = b * f.b;

    return *this;

}
Fractie& Fractie :: operator /= (const Fractie &f) {

    a = a * f.b;
    b = b * f.a;

    return *this;

}

bool Fractie :: operator == (const Fractie &f) {

    return (((*this).a == f.a) && ((*this).b == f.b));

}

bool Fractie :: operator != (const Fractie &f) {

    return (((*this).a != f.a) || ((*this).b != f.b));

}

bool Fractie :: operator < (const Fractie &f) {

    return ((*this).getValoare () < f.getValoare ());

}

bool Fractie :: operator >= (const Fractie &f) {

    return ((*this).getValoare () >= f.getValoare ());

}

bool Fractie :: operator > (const Fractie &f) {

    return ((*this).getValoare () > f.getValoare ());

}

bool Fractie :: operator <= (const Fractie &f) {

    return ((*this).getValoare () <= f.getValoare ());

}

int cmmdc (int x, int y) {

    int c = 1;

    for (int d = 1; d <= x && d <= y; d++)
        if(x % d == 0 && y % d == 0)
            c = d;

    return c;

}
