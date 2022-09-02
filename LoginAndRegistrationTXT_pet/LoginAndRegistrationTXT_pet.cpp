#include <iostream>
#include <fstream>

int main()
{
    std::cout << "Choose option:\n1.Login\n2.Registration\n[1/2]: ";
    int choice;
    bool flag = true;
    while (flag) {
        std::cin >> choice;
        if (choice == 1 or choice == 2) {
            std::cout << "ddd";
            flag = false;
        }
        std::cout << "You chose the wrong number! Try again [1/2]: ";
    }
    std::cout << "dddd";
    switch (choice) {

        case(1):



            break;

        case(2):
            std::cout << "ddd";
            std::ofstream myfile("test.txt");
            myfile << "Asd";
            std::cout << "File was created";
            myfile.close();

            break;

    }
    
    return 0;
}

