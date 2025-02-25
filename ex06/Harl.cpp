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
	for (size_t i = 0; i < level.size(); ++i) {
        level[i] = std::tolower(level[i]);
    }
	std::string levels[] = 
	{	
		"debug",
		"info",
		"warning",
		"error"
	};
	int levelnum = -1;
	for(int i = 0; i < 4 && levelnum == -1; i++)
	{
		if(level == levels[i])
			levelnum = i;
	}
	return levelnum;
}

void Harl::debug( void ){
	std::cout << "[DEBUG]" << std::endl <<"This is a debug message" << std::endl << std::endl;
}

void Harl::info( void ){
	std::cout<< "[INFO]" << std::endl <<"This is an info message" << std::endl << std::endl;
}

void Harl::warning( void ){
	std::cout << "[WARNING]" << std::endl << "This is a warning message" << std::endl << std::endl;
}

void Harl::error( void ){
	std::cout <<"[ERROR]" << std::endl <<"This is an error message" << std::endl << std::endl;
}