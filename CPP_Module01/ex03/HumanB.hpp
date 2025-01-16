#include "Weapon.hpp"

class HumanB{
    private:
            Weapon *wp;
            std::string name;
    public:
            HumanB(std::string);
            void attack();
            void setWeapon(Weapon &);
};