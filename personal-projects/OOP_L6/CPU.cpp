#include "CPU.h"

CPU::CPU(const char* name, const char* manufacturer, int cores, float frequency)
    : Component(name, manufacturer), cores(cores), frequency(frequency) {}

void CPU::displayInfo() const {
    Component::displayInfo();
    std::cout << "Cores: " << cores << ", Frequency: " << frequency << " GHz" << std::endl;
}

std::ostream& operator<<(std::ostream& out, const CPU& cpu) {
    out << static_cast<const Component&>(cpu) << ", Cores: " << cpu.cores << ", Frequency: " << cpu.frequency << " GHz";
    return out;
}

std::istream& operator>>(std::istream& in, CPU& cpu) {
    in >> static_cast<Component&>(cpu);
    std::cout << "Enter number of cores: ";
    in >> cpu.cores;
    std::cout << "Enter frequency (GHz): ";
    in >> cpu.frequency;
    return in;
}
