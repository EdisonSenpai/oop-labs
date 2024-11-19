#ifndef FASHION_HPP
#define FASHION_HPP

#include "Item.hpp"

class Fashion : public Item {

private:
    char* size;
    char* material;

public:
    Fashion(const char* name, double price, const char* size, const char* material);
    Fashion(const Fashion& other);
    Fashion& operator=(const Fashion& other);
    ~Fashion();

    void display() const;

};

#endif // FASHION_HPP
