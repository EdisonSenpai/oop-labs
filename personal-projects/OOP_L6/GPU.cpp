#include "GPU.h"

GPU::GPU(const char* name, const char* manufacturer, int memory)
    : Component(name, manufacturer), memory(memory) {}

void GPU::displayInfo() const {
    Component::displayInfo();
    std::cout << "Memory: " << memory << " GB" << std::endl;
}

std::ostream& operator<<(std::ostream& out, const GPU& gpu) {
    out << static_cast<const Component&>(gpu) << ", Memory: " << gpu.memory << " GB";
    return out;
}

std::istream& operator>>(std::istream& in, GPU& gpu) {
    in >> static_cast<Component&>(gpu);
    std::cout << "Enter memory (GB): ";
    in >> gpu.memory;
    return in;
}
