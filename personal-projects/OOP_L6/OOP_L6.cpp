#include <iostream>
#include "Computer.h"
#include "CPU.h"
#include "GPU.h"

int main() {
    const int numComputers = 2;
    Computer* computers[numComputers];

    CPU cpu1("Ryzen 9", "AMD", 12, 3.8f);
    GPU gpu1("RTX 3080", "NVIDIA", 10);
    computers[0] = new Computer("B550-A", "ASUS", "Dell Monitor", "Dell", cpu1, gpu1);

    CPU cpu2("Core i9", "Intel", 10, 3.5f);
    GPU gpu2("RTX 3070", "NVIDIA", 8);
    computers[1] = new Computer("Z490-A", "MSI", "Mechanical Keyboard", "Logitech", cpu2, gpu2);

    std::cout << "-->Computer Configurations<--\n\n";
    for (int i = 0; i < numComputers; ++i) {
        computers[i]->displayComputerInfo();
        std::cout << "----------------------" << std::endl;
    }

    for (int i = 0; i < numComputers; ++i) {
        delete computers[i];
    }

    return 0;
}
