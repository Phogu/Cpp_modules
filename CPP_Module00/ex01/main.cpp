#include "PhoneBook.hpp"
#include <string>
#include <iostream>

int main(){

    PhoneBook x;
    std::cout << "|---------------AVAILABLE COMMANDS---------------|" << std::endl;
    std::cout << "|                                                |" << std::endl;
    std::cout << "|     ADD   :    Adds contact to PhoneBook.      |" << std::endl;
    std::cout << "|     SEARCH: Searches for contact in PhoneBook. |" << std::endl;
    std::cout << "|     EXIT  :   Exits the PhoneBook.             |" << std::endl;
    std::cout << "|                                                |" << std::endl;
    std::cout << "|------------------------------------------------|" << std::endl;
    while (1)
    {
        std::string str;
        std::cout << "Enter command -> ";
        std::getline(std::cin,str);

        if(str == "ADD")
            x.add();
        else if(str == "SEARCH")
            x.search();
        else if(str == "EXIT")
            return 1;
        else
            continue;
    }
}