#ifndef CPU_H
#define CPU_H

#pragma warning (disable : 4996)

#include <iostream>
#include "Component.h"

class CPU : public Component {
private:
    int cores;
    float frequency; // GHz

public:
    CPU(const char* name, const char* manufacturer, int cores, float frequency);
    void displayInfo() const;

    friend std::ostream& operator<<(std::ostream& out, const CPU& cpu);
    friend std::istream& operator>>(std::istream& in, CPU& cpu);
};

#endif // CPU_H
