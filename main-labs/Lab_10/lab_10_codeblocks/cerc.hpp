#ifndef CERC_HPP_INCLUDED
#define CERC_HPP_INCLUDED

#include "interfata.h"

#define PI 3

class Cerc : public Interfata {

private:

	int raza;

public:

	Cerc();
	Cerc(int);
	//Cerc(const Cerc&);

	int getArie();
	bool isCerc();
	void afisare();

};

#endif // !CERC_HPP_INCLUDED
