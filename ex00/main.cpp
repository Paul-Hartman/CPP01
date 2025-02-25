#include "Zombie.hpp"

void randomChump(std::string name);
Zombie* newZombie(std::string name);

int main() {
	std::cout << "---stackZombies---" << std::endl;
	Zombie	zombie1("Zombie1");
	Zombie	zombie2;

	zombie1.announce();
	zombie2.announce();
	randomChump("randomZombie");

	std::cout << std::endl;
	std::cout << "---heapZombies---" << std::endl;
	Zombie	*heapZombie;

	heapZombie = newZombie("heapZombie");
	heapZombie->announce();

	std::cout << "---deconstructors---" << std::endl;
	delete(heapZombie);
	return 0;
}