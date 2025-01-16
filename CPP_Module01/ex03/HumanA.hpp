#pragma once
#include <iostream>
#include "Weapon.hpp"

class HumanA{
    private:
            Weapon &wp;
            std::string name;
    public:
            HumanA(std::string, Weapon &);
            void attack();
};