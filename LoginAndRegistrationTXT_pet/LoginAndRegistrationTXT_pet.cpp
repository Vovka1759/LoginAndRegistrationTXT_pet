#include <iostream>

int main()
{
    std::cout << "Choose option:\n1.Login\n2.Registration\n[1/2]: ";
    int choice;
    while (true) {
        std::cin >> choice;
        if (choice == 1 or choice == 2) {
            break;
        }
        std::cout << "You chose the wrong number! Try again [1/2]: ";
    }
    std::cout << choice;
}

