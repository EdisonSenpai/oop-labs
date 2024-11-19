#include "Fashion.hpp"

Fashion::Fashion(const char* name, double price, const char* size, const char* material)
    : Item(name, price), size(nullptr), material(nullptr) {

    if (size) {

        this->size = new char[strlen(size) + 1];
        strcpy(this->size, size);

    }

    if (material) {

        this->material = new char[strlen(material) + 1];
        strcpy(this->material, material);

    }

}

Fashion::Fashion(const Fashion& other)
    : Item(other), size(nullptr), material(nullptr) {

    if (other.size) {

        size = new char[strlen(other.size) + 1];
        strcpy(size, other.size);

    }

    if (other.material) {

        material = new char[strlen(other.material) + 1];
        strcpy(material, other.material);

    }

}

Fashion& Fashion::operator=(const Fashion& other) {

    if (this != &other) {

        Item::operator=(other);

        delete[] size;
        delete[] material;
        size = nullptr;
        material = nullptr;

        if (other.size) {

            size = new char[strlen(other.size) + 1];
            strcpy(size, other.size);

        }

        if (other.material) {

            material = new char[strlen(other.material) + 1];
            strcpy(material, other.material);

        }

    }

    return *this;

}

Fashion::~Fashion() {

    delete[] size;
    delete[] material;

}

void Fashion::display() const {

    Item::display();
    std::cout << ", Size: " << size << ", Material: " << material << std::endl;

}
