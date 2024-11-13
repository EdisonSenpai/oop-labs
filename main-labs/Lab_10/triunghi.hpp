#ifndef TRIUNGHI_HPP
#define TRIUNGHI_HPP

#include "interfata.hpp"

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

#endif // !TRIUNGHI_HPP