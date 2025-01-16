#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main() {
	ClapTrap c1 = ClapTrap();
	ScavTrap c2 = ScavTrap("Evelynn");
	ScavTrap c4 = ScavTrap();
	ScavTrap c3 = ScavTrap(c4);

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

	c2.guardGate();
	c3.guardGate();

	std::cout << std::endl;
}