#include "Zombie.hpp"

void randomChump(std::string name){
    Zombie a(name);
    a.set_name(name);
    a.announce();
}