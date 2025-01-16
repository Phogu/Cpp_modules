#pragma once
#include <iostream>

class Zombie{
    private:
            std::string name;
    public:
            Zombie(std::string);
            Zombie();
            ~Zombie();
            std::string get_name()const;
            void set_name(std::string name);
            void announce();
};
void randomChump(std::string name);
Zombie* newZombie(std::string name);