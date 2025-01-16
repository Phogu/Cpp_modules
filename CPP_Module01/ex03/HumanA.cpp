#include "Weapon.hpp"
#include "HumanA.hpp"

void HumanA::attack(){
    std::cout << this->name <<  " attacks with their " << this->wp.getType() << std::endl;
}

HumanA::HumanA(std::string name, Weapon &weapon) : wp(weapon){
    this->name = name;
}
