#include <iostream>

int main()
{
    std::cout << "Choose option:\n1.Login\n2.Registration\n[1/2]: ";
    int choise;
    while (true) {
        std::cin >> choise;
        if (choise == 1 or choise == 2) {
            break;
        }
        std::cout << "You chose the wrong number! Try again [1/2]: ";
    }
    std::cout << choise;
}

