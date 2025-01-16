#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main() {
	ScavTrap c1 = ScavTrap();
	FragTrap c2 = FragTrap("Evelynn");
	FragTrap c4 = FragTrap();
	FragTrap c3 = FragTrap(c4);

	std::cout << std::endl;

	c1.attack("Gromp");
	c2.attack("Scuttle");
	c3.attack("Krug");

	std::cout << std::endl;

	c1.takeDamage(80);
	c2.takeDamage(50);
	c2.takeDamage(50);
	c3.takeDamage(5);

	std::cout << std::endl;

	c1.beRepaired(1000);
	c2.beRepaired(1);
	c3.beRepaired(5);

	std::cout << std::endl;

	c1.guardGate();
	c2.highFivesGuys();
	c3.highFivesGuys();

	std::cout << std::endl;

}