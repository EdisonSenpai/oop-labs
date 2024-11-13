#include "bursa.hpp"

Bursa :: Bursa () {

    valoare = 0;
    tip = NULL;

}

Bursa :: Bursa (int Val, char *Tip) {

    valoare = Val;

    this -> tip = new char[strlen(Tip)+1];

    if (!tip) {

        cout << "Allocation failed!";
        exit (-1);

    }

    strcpy (tip, Tip);

}

Bursa :: Bursa (const Bursa &obj) {

    valoare = obj.valoare;

    tip = new char[strlen(obj.tip)+1];
    strcpy (tip, obj.tip);

}

Bursa :: ~Bursa () {

    delete []tip;

}

void Bursa :: set_valoare (int v) {

    this -> valoare = v;

}

int Bursa :: get_valoare ()const {

    return valoare;

}

Bursa &Bursa :: operator = (const Bursa &obj) {

    this -> valoare = obj.valoare;

    if (this -> tip)
        delete []this -> tip;

    this -> tip = new char[strlen(obj.tip)+1];
    strcpy (this -> tip, obj.tip);

    return *this;

}

istream &operator >> (istream &devi, Bursa &b) {

    cout << "Dati valoarea bursei: ";
    devi >> b.valoare;
    cout << "Dati tipul bursei: ";
    char buf[20];
    devi >> buf;
    if (b.tip)
        delete []b.tip;
    b.tip = new char [strlen(buf)+1];
    strcpy (b.tip, buf);

    return devi;

}

ostream &operator << (ostream &dev, const Bursa &b) {

    dev << "Valoare bursa: " << b.valoare << "\tTip bursa: " << b.tip;

    return dev;

}
