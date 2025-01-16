#pragma once
#include <iostream>

class Contacts{
    private:
        std::string firstName;
        std::string lastName;
        std::string nickName;
        std::string phoneNumber;
        std::string secret;
    public:
        Contacts();
        ~Contacts();
        std::string get_firstName()const;
        std::string get_lastName()const;
        std::string get_nickName()const;
        std::string get_phoneNumber()const;
        std::string get_secret()const;
               void set_firstName(std::string);
               void set_lastName(std::string);
               void set_nickName(std::string);
               void set_phoneNumber(std::string);
               void set_secret(std::string);
};