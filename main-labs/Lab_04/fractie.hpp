#ifndef FRACTIE_HPP_INCLUDED
#define FRACTIE_HPP_INCLUDED

#include <iostream>

using namespace std;

class Fractie {

    int a;
    int b;

public:

    Fractie (int aa = 0, int bb = 0);
    Fractie (const Fractie&);
    ~Fractie ();

    double getValoare ()const; //cat face a/b
    Fractie getInv ()const; //inversa unei fractii (b/a)
    void setdata (int, int);
    float getA ()const; //returneaza numaratorul
    float getB ()const; //returneaza numitorul

    friend Fractie operator + (const Fractie&, const Fractie&);
    friend Fractie operator - (const Fractie&, const Fractie&);
    friend Fractie operator * (const Fractie&, const Fractie&);
    friend Fractie operator / (const Fractie&, const Fractie&);
    friend Fractie operator - (const Fractie&);

    void afisareFractie ();

    Fractie &operator += (const Fractie&);//Fractie &operator += (Fractie* this, const Fractie&);
    Fractie &operator -= (const Fractie&);
    Fractie &operator *= (const Fractie&);
    Fractie &operator /= (const Fractie&);

    bool operator == (const Fractie&);
    bool operator != (const Fractie&);
    bool operator < (const Fractie&);
    bool operator >= (const Fractie&);
    bool operator > (const Fractie&);
    bool operator <= (const Fractie&);

};

int cmmdc (int, int);

#endif // FRACTIE_HPP_INCLUDED
