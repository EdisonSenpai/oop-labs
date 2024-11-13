#ifndef ORAS_HPP_INCLUDED
#define ORAS_HPP_INCLUDED

#include "locuitor.hpp"

class Oras {

    Locuitor *locuitori;
    int nr_locuitori;
    char *primar;

public:

    Oras ();
    Oras (Locuitor*, int, char*);
    Oras (const Oras&);
    ~Oras ();

    Oras &operator = (const Oras&);

    //friend &ostream operator << (ostream &dev, const Oras&);
    void setNumePrimar (char*);

};

#endif // ORAS_HPP_INCLUDED
