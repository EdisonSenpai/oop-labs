#ifndef INTERFATA_HPP
#define INTERFATA_HPP

#include <iostream>
/*
#include "patrat.hpp"
#include "dreptunghi.hpp"
#include "triunghi.hpp"
#include "triunghi_dreptunghic.hpp"
#include "cerc.hpp"
*/

using namespace std;

class Interfata {

public:

	virtual ~Interfata() = 0;

	virtual int getArie() = 0;
	virtual bool isCerc() = 0;
	virtual void afisare() = 0;

};

#endif // !INTERFATA_HPP