#include "GamePlatform.h"

//TODO: Declarati cu valorile initiale urmatoare: 
// -> Pentru gameCount si userCount 0
// -> Pentru gameCapacity si userCapacity >= 2
// Alocati corect memorie pentru cei doi vectori 
GamePlatform::GamePlatform(const char* platformName) : gameCount(0), gameCapacity(2), userCount(0), userCapacity(2) {
    
    this->platformName = new char[strlen(platformName) + 1];
    strcpy(this->platformName, platformName);

    games = new Game * [gameCapacity];
    users = new User * [userCapacity];

}

//TODO: Implementati destructorul si asigurati-va ca ati sters TOATE obiectele
GamePlatform::~GamePlatform() {

    delete[] platformName;

    for (int i = 0; i < gameCount; i++) {

        delete games[i];

    }

    delete[] games;

    for (int i = 0; i < userCount; i++) {

        delete users[i];

    }

    delete[] users;

}


//TODO: Implementati metoda addGame tinand cont de acesta aspecte:
// Verificati capacitatea sa nu fie mai mare de cat cantitatea:
// -> Cat timp verificarea e valida, cresteti capacitatea (ex: dublati-o)
// -> Creati si alocati memorie pentru vectorul de jocuri noi
// -> Copiati jocurile existente in vectorul nou alocat
// -> Eliberati memoria veche si actualizati pointer-ul
// Dupa verificare, adaugati noul joc 
void GamePlatform::addGame(const Game& game) {

    if (gameCount >= gameCapacity) {

        gameCapacity *= 2;

        Game** newGames = new Game * [gameCapacity];

        for (int i = 0; i < gameCount; i++) {

            newGames[i] = games[i];

        }

        delete[] games;
        games = newGames;
    }

    games[gameCount++] = new Game(game);

}

//TODO: Se procedeaza ca la addGame
void GamePlatform::addUser(const User& user) {

    if (userCount >= userCapacity) {

        userCapacity *= 2;

        User** newUsers = new User * [userCapacity];

        for (int i = 0; i < userCount; i++) {

            newUsers[i] = users[i];

        }

        delete[] users;
        users = newUsers;
    }

    users[userCount++] = new User(user);

}

void GamePlatform::displayGames() const {

    std::cout << "Platform: " << platformName << "\n\nGames available:\n";

    for (int i = 0; i < gameCount; i++) {

        //TODO: Apelati metoda corespunzatoare
        games[i]->displayGameDetails();
        std::cout << "----------------------" << std::endl;

    }

}

void GamePlatform::displayUsers() const {

    std::cout << "\nUsers on platform:\n";

    for (int i = 0; i < userCount; i++) {

        //TODO: Apelati metoda corespunzatoare
        users[i]->displayUserInfo();
        std::cout << "----------------------" << std::endl;

    }

}
