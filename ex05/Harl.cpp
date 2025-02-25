#include "Harl.hpp"

Harl::Harl(){}

Harl::~Harl(){}

void Harl::complain( std::string level ){

	void (Harl::*funcPtr[])(void) = 
	{
		&Harl::debug,
		&Harl::info,
		&Harl::warning,
		&Harl::error
	};

	std::string levels[] = 
	{	
		"debug",
		"info",
		"warning",
		"error"
	};
	bool found = false;
	for (int i = 0; i < 4; i++)
	{
		if(level == levels[i])
		{
			(this->*funcPtr[i])();
			found = true;
			break;
		}
	}
	if (!found)
		std::cout << "Invalid level" << std::endl;
	
}

void Harl::debug( void ){
	std::cout << "DEBUG: This is a debug message" << std::endl;
}

void Harl::info( void ){
	std::cout << "INFO: This is an info message" << std::endl;
}

void Harl::warning( void ){
	std::cout << "WARNING: This is a warning message" << std::endl;
}

void Harl::error( void ){
	std::cout << "ERROR: This is an error message" << std::endl;
}