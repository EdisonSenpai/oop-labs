#include "GameInfo.h"

GameInfo::GameInfo(const char* title, const char* genre) : title(nullptr), genre(nullptr) {
    
    deepCopy(this->title, title);
    deepCopy(this->genre, genre);

}

GameInfo::GameInfo(const GameInfo& other) : title(nullptr), genre(nullptr) {
   
    deepCopy(this->title, other.title);
    deepCopy(this->genre, other.genre);

}

GameInfo& GameInfo::operator=(const GameInfo& other) {

    if (this != &other) {

        deepCopy(this->title, other.title);
        deepCopy(this->genre, other.genre);

    }

    return *this;

}

GameInfo::~GameInfo() {

    delete[] title;
    delete[] genre;

}

void GameInfo::displayInfo() const {

    std::cout << "Title: " << title << ", Genre: " << genre << std::endl;

}

std::ostream& operator<<(std::ostream& out, const GameInfo& info) {

    out << "Title: " << info.title << ", Genre: " << info.genre;

    return out;

}

std::istream& operator>>(std::istream& in, GameInfo& info) {

    char temp[100];

    std::cout << "Enter game title: ";
    in >> temp;
    deepCopy(info.title, temp);

    std::cout << "Enter genre: ";
    in >> temp;
    deepCopy(info.genre, temp);

    return in;

}
