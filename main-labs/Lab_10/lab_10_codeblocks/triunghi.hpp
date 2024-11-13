#ifndef TRIUNGHI_HPP_INCLUDED
#define TRIUNGHI_HPP_INCLUDED

#include "interfata.h"

class Triunghi : public Interfata {

protected:

	int baza;
	int inaltime;

public:

	Triunghi();
	Triunghi(int, int);
	//Triunghi(const Triunghi&);

	int getArie();
	bool isCerc();
	void afisare();

};

#endif // !TRIUNGHI_HPP_INCLUDED
