#ifndef LOCUINTA_HPP_INCLUDED
#define LOCUINTA_HPP_INCLUDED

#include <iostream>
#include <cstring>

using namespace std;

class Locuinta {

protected:

    char *adresa;
    int valoare;

public:

    Locuinta ();
    Locuinta (char*, int);
    Locuinta (const Locuinta&);
    ~Locuinta ();

};

#endif // LOCUINTA_HPP_INCLUDED
