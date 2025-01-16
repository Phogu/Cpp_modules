#pragma once
#include <iostream>
#include <string>

class ClapTrap {
    private:
		  std::string name;
		  unsigned int hitPoints;
		  unsigned int energyPoints;
		  unsigned int attackDamage;
    public:
      ClapTrap();
      ClapTrap(std::string name);
      ClapTrap(const ClapTrap& copy);
      ~ClapTrap();
      ClapTrap& operator=(const ClapTrap& copy);
      void attack(const std::string& target);
      void takeDamage(unsigned int amount);
      void beRepaired(unsigned int amount);
      void setVar(std::string name,int hitPoint, int energyPoint, int attackDamage);
      std::string getName() const;
      int getHitPoint() const;
      int getEnergyPoint() const;
      int getAttackDamage() const;
};
