#ifndef PATRAT_HPP
#define PATRAT_HPP

#include "interfata.hpp"

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

#endif // !PATRAT_HPP