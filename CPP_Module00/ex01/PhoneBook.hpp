#pragma once
#include "Contacts.hpp"

        class PhoneBook{
        private:
                int index;
        public:
                Contacts contacts[8];
                PhoneBook();
                void add();
                void search();
        }; 

std::string formatter(std::string);