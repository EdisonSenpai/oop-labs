#ifndef MERCEDES_H_INCLUDED
#define MERCEDES_H_INCLUDED

#include "Car.h"

class Mercedes : public Car {
public:
	Mercedes();

	float GoCar(bool& b, int, int) override;
	char* getName() override;
};

#endif // !MERCEDES_H_INCLUDED
