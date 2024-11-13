#ifndef TEHNICIAN_HPP_INLCLUDED
#define TEHNICIAN_HPP_INCLUDED

#include "angajat.hpp"

class Tehnician : public Angajat {

public:

	Tehnician();
	Tehnician(int, int, const char*);

	void afisare();

};

#endif // !TEHNICIAN_HPP_INLCLUDED
