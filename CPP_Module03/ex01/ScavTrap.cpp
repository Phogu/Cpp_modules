#include "ScavTrap.hpp"

ScavTrap::ScavTrap() {
	this->name = "Scavfault";
	this->hitPoints = 100;
	this->energyPoints = 50;
	this->attackDamage = 20;

	std::cout << this->name << " ScavTrap created" << std::endl;
}

ScavTrap::ScavTrap(std::string name) {
	this->name = name;
	this->hitPoints = 100;
	this->energyPoints = 50;
	this->attackDamage = 20;

	std::cout << this->name << " ScavTrap created" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& other) {
	*this = other;

	std::cout << this->name << " ScavTrap copy created" << std::endl;
}

ScavTrap::~ScavTrap() {
	std::cout << this->name << " ScavTrap destroyed" << std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& other) {
	this->name = other.name;
	this->hitPoints = other.hitPoints;
	this->energyPoints = other.energyPoints;
	this->attackDamage = other.attackDamage;

	std::cout << this->name << " ScavTrap = " << other.name << std::endl;

	return *this;
}

void ScavTrap::attack(const std::string& target) {
	if (this->energyPoints > 0) {
		if (this->hitPoints == 0) {
			std::cout << this->name << " ScavTrap can't attack because is dead" << std::endl;
			return;
		}

		std::cout
			<< this->name << " ScavTrap attack " << target
			<< ", causing " << this->attackDamage << " damage"
			<< std::endl;
			this->energyPoints--;
	}
	else
		std::cout << this->name << " no energy left" << std::endl;
}

void ScavTrap::guardGate() {
	if (this->hitPoints == 0) {
		std::cout << this->name << " ScavTrap can't guard gate because is dead" << std::endl;
		return;
	}

	std::cout << this->name << " ScavTrap is now guarding the gate" << std::endl;
}