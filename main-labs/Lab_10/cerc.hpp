#ifndef CERC_HPP
#define CERC_HPP

#include "interfata.hpp"

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

#endif // !CERC_HPP