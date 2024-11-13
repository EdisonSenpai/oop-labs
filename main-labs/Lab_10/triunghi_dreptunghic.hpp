#ifndef TRIUNGHI_DREPTUNGHIC_HPP
#define TRIUNGHI_DREPTUNGHIC_HPP

#include "triunghi.hpp"

class Triunghi_dreptunghic : public Triunghi {

private:

	int cateta;

public:

	Triunghi_dreptunghic();
	Triunghi_dreptunghic(int, int, int);
	//Triunghi_dreptunghic(const Triunghi_dreptunghic&);

	int getArie();
	bool isCerc();
	void afisare();

};

#endif // !TRIUNGHI_DREPTUNGHIC_HPP