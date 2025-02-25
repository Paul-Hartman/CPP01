#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name);

int main()
{
	int numZombies = 5;
	Zombie* horde = zombieHorde(numZombies, "zombie");
	for(int i = 0; i < numZombies; i++)
		horde[i].announce();
	delete [] horde;
	return 0;
}
