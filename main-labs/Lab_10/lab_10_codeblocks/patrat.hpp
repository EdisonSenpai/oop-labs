#ifndef PATRAT_HPP_INCLUDED
#define PATRAT_HPP_INCLUDED

#include "interfata.h"

class Patrat : public Interfata {

private:

	int latura;

public:

	Patrat();
	Patrat(int);
	//Patrat(const Patrat&);

	int getArie();
	bool isCerc();
	void afisare();

};

#endif // !PATRAT_HPP_INCLUDED
