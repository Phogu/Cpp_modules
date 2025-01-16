#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
	: name("Clapfault")
	, hitPoints(10)
	, energyPoints(10)
	, attackDamage(0) {
	std::cout << this->name << " ClapTrap created" << std::endl;
}

ClapTrap::ClapTrap(std::string name)
	: name(name)
	, hitPoints(10)
	, energyPoints(10)
	, attackDamage(0) {
	std::cout << this->name << " ClapTrap created" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& other) {
	*this = other;

	std::cout << this->name << " copy created" << std::endl;
}

ClapTrap::~ClapTrap() {
	std::cout << this->name << " ClapTrap destroyed" << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& other) {
	this->name = other.name;
	this->hitPoints = other.hitPoints;
	this->energyPoints = other.energyPoints;
	this->attackDamage = other.attackDamage;

	std::cout << this->name << " = " << other.name << std::endl;

	return *this;
}

void ClapTrap::attack(const std::string &target) {
	if (this->energyPoints > 0) {
		if (this->hitPoints == 0) {
			std::cout << this->name << " ClapTrap can't attack because is dead" << std::endl;
			return;
		}

		std::cout
			<< this->name << " ClapTrap attack " << target
			<< ", causing " << this->attackDamage << " damage"
			<< std::endl;
			this->energyPoints--;
	}
	else
		std::cout << this->name << " no energy left" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount) {
	if (this->energyPoints > 0) {
		if (this->hitPoints == 0) {
			std::cout << this->name << " ClapTrap can't be repaired because is dead" << std::endl;
			return;
		}

		this->hitPoints += amount;
		std::cout << this->name << " ClapTrap has repaired " << amount << " hit points" << std::endl;
		this->energyPoints--;
	}
	else
		std::cout << this->name << " no energy left" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount) {
	if (this->hitPoints == 0) {
		std::cout << this->name << " ClapTrap can't take damage because is dead" << std::endl;
		return;
	}

	if (amount > this->hitPoints) {
		amount = this->hitPoints;
	}

	this->hitPoints -= amount;

	std::cout << this->name << " ClapTrap has taken " << amount << " damage" << std::endl;
}
