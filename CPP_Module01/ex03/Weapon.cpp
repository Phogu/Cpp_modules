#include "Weapon.hpp"

std::string Weapon::getType()const{
    return this->type;
}

void Weapon::setType(std::string str){
    this->type = str;
}

Weapon::Weapon(std::string wp){
    this->setType(wp);
}

Weapon::Weapon(){
    
}