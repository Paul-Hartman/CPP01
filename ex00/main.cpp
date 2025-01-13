#include "Zombie.hpp"

void randomChump(std::string name);
Zombie* newZombie(std::string name);

int main() {
	Zombie* zombie = newZombie("Zombie1");
	zombie->announce();
	randomChump("Zombie2");
	delete zombie;
	return 0;
}