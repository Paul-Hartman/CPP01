#include "Harl.hpp"

Harl::Harl(){}

Harl::~Harl(){}

void Harl::complain( std::string level ){
	void (Harl::*funcPtr)(void) = NULL;
	if (level == "debug"){
		funcPtr = &Harl::debug;
	}
	else if (level == "info"){
		funcPtr = &Harl::info;
	}
	else if (level == "warning"){
		funcPtr = &Harl::warning;
	}
	else if (level == "error"){
		funcPtr = &Harl::error;
	}
	else{
		std::cout << "Invalid type" << std::endl;
	}

	if (funcPtr != NULL){
		(this->*funcPtr)();
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