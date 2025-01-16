#include "Zombie.hpp"
#include <iostream>

std::string Zombie::get_name()const{
    return (this->name);
}

void Zombie::set_name(std::string name){
    this->name = name;
}


void Zombie::announce(){
    std::cout << this->name << ":" << " BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::Zombie(std::string name){
    this->set_name(name);
    std::cout << this->get_name() << " Created" << std::endl;
}

Zombie::Zombie(){
    std::cout << "Anyone Created" << std::endl;
}

Zombie::~Zombie(){
    std::cout << this->get_name() << " Destroyed" << std::endl;
}
