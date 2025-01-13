#include "HumanA.hpp"
#include "HumanB.hpp"
#include "Weapon.hpp"

int main(int argc, char const *argv[])
{
	(void)argc;
	(void)argv;
	// Weapon club = Weapon("crude spiked club");

	// HumanA bob("Bob", club);
	// bob.attack();
	// club.setType("some other type of club");
	// bob.attack();


	
	Weapon club = Weapon("crude spiked club");
	HumanB jim("Jim");
	jim.setWeapon(club);
	jim.attack();
	club.setType("some other type of club");
	jim.attack();


	return 0;
}
