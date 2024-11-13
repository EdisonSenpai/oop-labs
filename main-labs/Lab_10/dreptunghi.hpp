#ifndef DREPTUNGHI_HPP
#define DREPTUNGHI_HPP

#include "interfata.hpp"

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

#endif // !DREPTUNGHI_HPP