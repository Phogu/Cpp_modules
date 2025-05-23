#include "FragTrap.hpp"

FragTrap::FragTrap() {
	this->name = "Fragfault";
	this->hitPoints = 100;
	this->energyPoints = 100;
	this->attackDamage = 30;

	std::cout << this->name << " FragTrap created" << std::endl;
}

FragTrap::FragTrap(std::string name) {
	this->name = name;
	this->hitPoints = 100;
	this->energyPoints = 100;
	this->attackDamage = 30;

	std::cout << this->name << " FragTrap created" << std::endl;
}

FragTrap::FragTrap(const FragTrap& other) {
	*this = other;

	std::cout << this->name << " FragTrap copy created" << std::endl;
}

FragTrap::~FragTrap() {
	std::cout << this->name << " FragTrap destroyed" << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap& other) {
	this->name = other.name;
	this->hitPoints = other.hitPoints;
	this->energyPoints = other.energyPoints;
	this->attackDamage = other.attackDamage;

	std::cout << this->name << " FragTrap = " << other.name << std::endl;

	return *this;
}

void FragTrap::highFivesGuys() {
	if (this->hitPoints == 0) {
		std::cout << this->name << " FragTrap can't high fives because is dead" << std::endl;
		return;
	}

	std::cout << this->name << " FragTrap high fives guys!" << std::endl;
}