#ifndef VECTOR_HPP
#define VECTOR_HPP

#include <iostream>
#include "fractie.hpp"
#include "nr_complex.hpp"

using namespace std;

template <class X>
class Vector {

private:

    int dim;
    X *buffer;

public:

    Vector(int d, X *buf);
    ~Vector();

    void afisare();
    void sortare();

};

#endif // VECTOR_HPP
