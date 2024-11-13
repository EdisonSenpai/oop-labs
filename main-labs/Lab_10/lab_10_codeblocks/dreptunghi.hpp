#ifndef DREPTUNGHI_HPP_INCLUDED
#define DREPTUNGHI_HPP_INCLUDED

#include "interfata.h"

class Dreptunghi : public Interfata {

private:

	int lungime;
	int latime;

public:

	Dreptunghi();
	Dreptunghi(int, int);
	//Dreptunghi(const Dreptunghi&);

	int getArie();
	bool isCerc();
	void afisare();

};

#endif // !DREPTUNGHI_HPP_INCLUDED
