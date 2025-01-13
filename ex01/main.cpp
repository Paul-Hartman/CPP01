#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name);

int main(int argc, char const *argv[])
{
	(void)argc;
	(void)argv;
	Zombie* horde = zombieHorde(5, "bernard");
	delete [] horde;
	return 0;
}
