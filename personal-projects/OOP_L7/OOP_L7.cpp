#include "GamePlatform.h"
#include "Game.h"
#include "User.h"

int main() {

    GamePlatform platform("Mini-Steam");

    int choice;

    do {

        std::cout << "\n--- Mini-Steam Platform ---\n";
        std::cout << "1. Add a Game\n";
        std::cout << "2. Add a User\n";
        std::cout << "3. Display All Games\n";
        std::cout << "4. Display All Users\n";
        std::cout << "0. Exit\n";
        std::cout << "\nChoose an option: ";

        std::cin >> choice;

        if (choice == 1) {

            Game newGame;
            std::cout << "//Enter game details//\n\n";
            std::cin >> newGame;
            platform.addGame(newGame);

        }

        else if (choice == 2) {

            User newUser;
            std::cout << "//Enter user details//\n\n";
            std::cin >> newUser;
            platform.addUser(newUser);

        }

        else if (choice == 3) {

            std::cout << "\n--- List of Games ---\n";
            platform.displayGames();

        }

        else if (choice == 4) {

            std::cout << "\n--- List of Users ---\n";
            platform.displayUsers();

        }

        else if (choice != 0) {

            std::cout << "Invalid choice. Please try again.\n";

        }

    } while (choice != 0);

    std::cout << "\nExiting Mini-Steam...\n\n Goodbye!\n";

    return 0;

}
