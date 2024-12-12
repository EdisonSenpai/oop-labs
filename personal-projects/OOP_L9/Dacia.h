#ifndef DACIA_H_INCLUDED
#define DACIA_H_INCLUDED

#include "Car.h"

class Dacia : public Car {
public:

	Dacia();

	float GoCar(bool& b, int, int) override;
	char* getName() override;

};

#endif // !DACIA_H_INCLUDED
