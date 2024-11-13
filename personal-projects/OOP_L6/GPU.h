#ifndef GPU_H
#define GPU_H

#pragma warning (disable : 4996)

#include <iostream>
#include "Component.h"

class GPU : public Component {
private:
    int memory; // GB

public:
    GPU(const char* name, const char* manufacturer, int memory);
    void displayInfo() const;

    friend std::ostream& operator<<(std::ostream& out, const GPU& gpu);
    friend std::istream& operator>>(std::istream& in, GPU& gpu);
};

#endif // GPU_H
