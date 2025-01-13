#include "Weapon.hpp"
#include "HumanB.hpp"

HumanB::HumanB(std::string name): _name(name), _weapon(NULL){}


HumanB::~HumanB() {}



void HumanB::attack()
{
	std::cout << _name << " attacks with their " << _weapon->getType() << std::endl;
}

void HumanB::setWeapon(Weapon &weapon)
{
	if(_weapon == NULL)
		_weapon = &weapon;
	else
	{
		delete _weapon;
		_weapon = &weapon;
	}
}
