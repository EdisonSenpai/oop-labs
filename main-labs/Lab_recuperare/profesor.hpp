#ifndef PROFESOR_HPP_INCLUDED
#define PROFESOR_HPP_INCLUDED

#include "angajat.hpp"

class Profesor : public Angajat {

public:

	Profesor();
	Profesor(int, int, const char*);

	void afisare();

};

#endif // !PROFESOR_HPP_INCLUDED
