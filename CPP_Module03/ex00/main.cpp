#include "ClapTrap.hpp"

int main() {
	ClapTrap c1 = ClapTrap();
	ClapTrap c2 = ClapTrap("Evelynn");
	ClapTrap c3 = ClapTrap(c1);

	std::cout << std::endl;

	c1.attack("Gromp");
	c2.attack("Scuttle");
	c3.attack("Krug");

	std::cout << std::endl;

	c1.takeDamage(80);
	c2.takeDamage(5);
	c2.takeDamage(5);
	c2.takeDamage(5);
	c3.takeDamage(5);

	std::cout << std::endl;

	c1.beRepaired(1000);
	c2.beRepaired(1);
	c3.beRepaired(5);

	std::cout << std::endl;
}