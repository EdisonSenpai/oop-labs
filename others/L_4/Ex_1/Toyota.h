#ifndef TOYOTA_H_INCLUDED
#define TOYOTA_H_INCLUDED

#include "Car.h"

class Toyota : public Car {
public:
	Toyota();
	float GoCar(bool& b, int, int) override;
	char* getName() override;
};

#endif // !TOYOTA_H_INCLUDED
