#ifndef IMPOZIT_HPP_INCLUDED
#define IMPOZIT_HPP_INCLUDED

#include <iostream>
#include <cstring>

using namespace std;

class Impozit {

protected:

    int *taxe;
    int nr_taxe;

public:

    Impozit ();
    Impozit (int*, int);
    Impozit (const Impozit&);
    ~Impozit ();

};

#endif // IMPOZIT_HPP_INCLUDED
