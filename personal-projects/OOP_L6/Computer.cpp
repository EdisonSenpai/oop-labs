#include "Computer.h"

Computer::Computer(const char* name_comp, const char* manufacturer_comp, const char* name_per, const char* manufacturer_per, const CPU& cpu, const GPU& gpu)
    : Component(name_comp, manufacturer_comp), Peripheral(name_per, manufacturer_per), cpu(cpu), gpu(gpu) {}

void Computer::displayComputerInfo() const {
    Component::displayInfo();
    Peripheral::displayInfo();
    cpu.displayInfo();
    gpu.displayInfo();
}
