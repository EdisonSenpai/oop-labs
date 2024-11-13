#ifndef LOCUITOR_HPP_INCLUDED
#define LOCUITOR_HPP_INCLUDED

#include "impozit.hpp"
#include "locuinta.hpp"

class Locuitor: public Impozit, public Locuinta {

    char *nume;

public:

    Locuitor ();
    Locuitor (int*, int, char*, int, char*);
    Locuitor (const Locuitor&);
    ~Locuitor ();

};

#endif // LOCUITOR_HPP_INCLUDED
