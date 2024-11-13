#ifndef INGINER_HPP_INCLUDED
#define INGINER_HPP_INCLUDED

#include "angajat.hpp"

class Inginer : public Angajat {

public:

	Inginer();
	Inginer(int, int, const char*);

	void afisare();

};

#endif // !INGINER_HPP_INCLUDED
