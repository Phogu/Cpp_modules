#include <iostream>
#include "PhoneBook.hpp"
#include <string>
#include <sstream>

bool my_empty(std::string str){
    int i = 0;
    for(; str[i] != '\0'; i++);
    if (i == 0)
        return (1);
    return (0);
}

bool my_number(std::string str) {
    for (unsigned long i = 0; i < str.length(); i++)
    {
        if (isdigit(str[i]) == false)
            return false;
    }
    return  true;
}

void PhoneBook::add(){
    static int i = 0;

    if(i == 8)
        i = 0;

    std::string str;

    while (my_empty(str)){
        std::cout << "Name : ";
        std::getline(std::cin,str);
        this->contacts[i].set_firstName(str);
    }
    str = "";

    while (my_empty(str)){
        std::cout << "Lastname : ";
        std::getline(std::cin,str);
        this->contacts[i].set_lastName(str);
    }
    str = "";

    while (my_empty(str)){
        std::cout << "Nickname : ";
        std::getline(std::cin,str);
        this->contacts[i].set_nickName(str);
    }
    str = "";

    while (my_empty(str)){
        std::cout << "Phone Number : ";
        std::getline(std::cin,str);
        this->contacts[i].set_phoneNumber(str);
    }
    str = "";

    while (my_empty(str)){
        std::cout << "Secret : ";
        std::getline(std::cin,str);
        this->contacts[i].set_secret(str);
    }
    this->index++;
    i++;
}

int stringToInteger(const std::string& str) {
    std::stringstream ss(str);
    int result;

    if (!(ss >> result)) {
        throw std::invalid_argument("Invalid Argument: " + str);
    }

    return result;
}

void PhoneBook::search(){
    
    int j = 0;
    int i = this->index;
    
    std::string tmp;
    
    if(i > 7){
        i = 8;
    }

    std::cout << formatter("INDEX") + "|" << formatter("NAME") + "|" << formatter("SURNAME") + "|" << formatter("NICKNAME") + "|" << std::endl;

    while(j < i){
        tmp = std::to_string(j + 1);
        std::cout << formatter(tmp) << "|";
        std::cout << formatter(this->contacts[j].get_firstName()) << "|";
        std::cout << formatter(this->contacts[j].get_lastName()) << "|";
        std::cout << formatter(this->contacts[j].get_nickName()) << "|";
        j++;

        std::cout << std::endl;
    }

    if(this->index > 0)
    {
        std::cout << "Enter index : ";
        std::getline(std::cin,tmp);

        if (my_number(tmp))
            i = stringToInteger(tmp);
        else
            return;
        i--;

        if(i < this->index && i >= 0 && i <= 7)
        {   
            std::cout << "Name     : " << this->contacts[i].get_firstName() << std::endl;
            std::cout << "Surname  : " << this->contacts[i].get_lastName() << std::endl;
            std::cout << "Nickname : " << this->contacts[i].get_nickName() << std::endl;
            std::cout << "Phone    : " << this->contacts[i].get_phoneNumber() << std::endl;
            std::cout << "Secret   : " << this->contacts[i].get_secret() << std::endl;
        }
        else
            std::cout << "index not found.." << std::endl;
    }
}

PhoneBook::PhoneBook(){
    this->index = 0;
}