#include <iostream>
#include <fstream>

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
    switch (choice) {

        case(1):



            break;

        case(2):
            while (true)
            {
                std::string name;
                std::cout << "Set your account Name: ";
                std::cin >> name;
                name = name + ".txt";

                std::ifstream test_file(name);
                std::string test_data;
                test_file >> test_data;
                if (test_data == "") {
                    std::ofstream myfile(name);
                    std::string password;
                    std::cout << "Set your account Password: ";
                    std::cin >> password;
                    myfile << password;
                    std::cout << "Your account was created!";
                    myfile.close();
                    break;
                }
                else {
                    std::cout << "This account Name is already used!\n";
                }
            }
    }
    
    return 0;
}

