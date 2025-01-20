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

	for (int i = 0; i < 4; i++)
	{
		if(level == levels[i])
		{
			(this->*funcPtr[i])();
			break;
		}
	}
}

int Harl::getLevel(std::string level)
{
	if(level == "error")
	{
		return 0;
	}
	else if(level == "warning")
	{
		return 1;
	}
	else if(level == "info")
	{
		return 2;
	}
	else if(level == "debug")
	{
		return 3;
	}
	else
	{
		return -1;
	}
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