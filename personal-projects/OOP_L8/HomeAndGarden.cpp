#include "HomeAndGarden.hpp"

HomeAndGarden::HomeAndGarden(const char* name, double price, const char* dimensions, const char* material)
    : Item(name, price), dimensions(nullptr), material(nullptr) {

    if (dimensions) {

        this->dimensions = new char[strlen(dimensions) + 1];
        strcpy(this->dimensions, dimensions);

    }

    if (material) {

        this->material = new char[strlen(material) + 1];
        strcpy(this->material, material);

    }

}

HomeAndGarden::HomeAndGarden(const HomeAndGarden& other)
    : Item(other), dimensions(nullptr), material(nullptr) {

    if (other.dimensions) {

        dimensions = new char[strlen(other.dimensions) + 1];
        strcpy(dimensions, other.dimensions);

    }

    if (other.material) {

        material = new char[strlen(other.material) + 1];
        strcpy(material, other.material);

    }

}

HomeAndGarden& HomeAndGarden::operator=(const HomeAndGarden& other) {

    if (this != &other) {

        Item::operator=(other);

        delete[] dimensions;
        delete[] material;
        dimensions = nullptr;
        material = nullptr;

        if (other.dimensions) {

            dimensions = new char[strlen(other.dimensions) + 1];
            strcpy(dimensions, other.dimensions);

        }

        if (other.material) {

            material = new char[strlen(other.material) + 1];
            strcpy(material, other.material);

        }

    }

    return *this;

}

HomeAndGarden::~HomeAndGarden() {

    delete[] dimensions;
    delete[] material;

}

void HomeAndGarden::display() const {

    Item::display();
    std::cout << ", Dimensions: " << dimensions << ", Material: " << material << std::endl;

}
