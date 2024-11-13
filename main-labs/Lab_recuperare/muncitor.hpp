#ifndef MUNCITOR_HPP_INCLUDED
#define MUNCITOR_HPP_INCLUDED

#include "angajat.hpp"

class Muncitor : public Angajat {

public:

	Muncitor();
	Muncitor(int, int, const char*);

	void afisare();

};

#endif // !MUNCITOR_HPP_INCLUDED
