#include "Harl.hpp"

int main(int argc, const char** argv){
	Harl harl;
	if (argc == 2)
	{
		int level = harl.getLevel(argv[1]);
		switch(level)
		{
			case 0:
				harl.complain("error");
			case 1:
				harl.complain("warning");
			case 2:
				harl.complain("info");
			case 3:
				harl.complain("debug");
				
		}

	}
	else
	{
		std::cout << "Usage: " << argv[0] << " <debug|info|warning|error>" << std::endl;
	}
	return 1;
}

