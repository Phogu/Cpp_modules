#include "Zombie.hpp"
#include <iostream>

std::string Zombie::get_name()const{
    return (this->name);
}

void Zombie::set_name(std::string name){
    this->name = name;
}

void Zombie::announce(){
    std::cout << this->get_name() << ":" << " BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::Zombie(){
    std::cout << "Zombie Created" << std::endl;
}

Zombie::~Zombie(){
    std::cout << this->get_name() << " Destroyed" << std::endl;
}
