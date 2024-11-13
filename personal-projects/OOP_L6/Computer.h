#ifndef COMPUTER_H
#define COMPUTER_H

#include <iostream>
#include "Component.h"
#include "Peripheral.h"
#include "CPU.h"
#include "GPU.h"

class Computer : public Component, public Peripheral {
private:
    CPU cpu;
    GPU gpu;

public:
    Computer(const char* name_comp, const char* manufacturer_comp, const char* name_per, const char* manufacturer_per, const CPU& cpu, const GPU& gpu);
    void displayComputerInfo() const;
};

#endif // COMPUTER_H
