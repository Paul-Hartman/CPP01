#include "Harl.hpp"

int main(int argc, const char** argv){
	Harl harl;
	if (argc == 2)
	{
		int level = harl.getLevel(argv[1]);
		switch(level)
		{
			case 0:
				harl.complain("debug");
			case 1:
				harl.complain("info");
			case 2:
				harl.complain("warning");
			case 3:
				harl.complain("error");
				break;
			default:
				std::cout << "Invalid level" << std::endl;

		}
	}
	else
	{
		std::cout << "Wrong number of arguments! Please enter error|warning|info|debug" << std::endl;
	}
	return 1;
}

