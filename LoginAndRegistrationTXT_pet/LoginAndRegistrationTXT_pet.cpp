#include <iostream>
#include <fstream>

bool isAccountExists(std::string name) {

    name = "accs/" + name + ".txt";

    std::ifstream myfile(name);
    std::string data;
    myfile >> data;

    if (data == "") {
        return false;
    }
    else {
        return true;
    }
}

bool isPasswordMatches(std::string name, std::string password) {
    name = "accs/" + name + ".txt";

    std::ifstream myfile(name);
    std::string data;
    myfile >> data;

    if (data == password) {
        return true;
    }
    else {
        return false;
    }

}

void createNewAccount(std::string name, std::string password) {
    name = "accs/" + name + ".txt";
    std::ofstream myfile(name);
    myfile << password;
    myfile.close();
}

int main()
{
    std::cout << "Login And Registration TXT by Vovka1759\n\nChoose option:\n1.Login\n2.Registration\n[1/2]: ";
    std::string choice;
    int num;
    while (true) {
        std::cin >> choice;
        num = atoi(choice.c_str());
        if (num == 1 or num == 2) {
           break;
        }
        std::cout << "You chose the wrong number! Try again [1/2]: ";
    }
    switch (num) {

        case(1):
            while (true)
            {
                std::string name;
                std::cout << "Write your account Name: ";
                std::cin >> name;
                
                if (isAccountExists(name)) {
                    while (true)
                    {
                        std::cout << "Write your account Password: ";
                        std::string password;
                        std::cin >> password;
                        if (isPasswordMatches(name, password)) {
                            std::cout << "Your successfully logged in your account!";
                            break;
                        }
                        else {
                            std::cout << "This account Password is incorrect!\n";  
                        } 
                    }
                    break;
                }
                else {
                    std::cout << "This account Name is not used!\n";  
                }
            }
            break;

        case(2):
            while (true)
            {
                std::string name;
                std::cout << "Set your account Name: ";
                std::cin >> name;
                if (!isAccountExists(name)) {  
                    std::string password;
                    std::cout << "Set your account Password: ";
                    std::cin >> password;
                    createNewAccount(name,  password);
                    std::cout << "Your account was created!";
                    break;
                }
                else {
                    std::cout << "This account Name is already used!\n";
                }
            }
    }
    
    return 0;
}

