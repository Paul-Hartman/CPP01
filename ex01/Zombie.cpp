#include "Zombie.hpp"

Zombie::Zombie() {
	_name = "nameless";
}

Zombie::Zombie(std::string name) {
	_name = name;
}

Zombie::~Zombie() {
	std::cout << "Zombie: " << _name << " was destroyed" << std::endl;
}

void Zombie::announce( void ) {
	std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

