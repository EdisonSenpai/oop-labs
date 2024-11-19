#ifndef HOMEANDGARDEN_HPP
#define HOMEANDGARDEN_HPP

#include "Item.hpp"

class HomeAndGarden : public Item {

private:
    char* dimensions; // ex: "200x150x50 cm"
    char* material;   // ex: "Lemn"

public:
    HomeAndGarden(const char* name, double price, const char* dimensions, const char* material);
    HomeAndGarden(const HomeAndGarden& other);
    HomeAndGarden& operator=(const HomeAndGarden& other);
    ~HomeAndGarden();

    void display() const;

};

#endif // HOMEANDGARDEN_HPP
