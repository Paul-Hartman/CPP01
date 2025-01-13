#include <iostream>
#include <fstream>
#include <string>


int main(int argc, char const *argv[])
{
	if(argc == 4)
	{
		std::ifstream file(argv[1]);
		if(!file.is_open())
		{
			std::cout << "Error: could not open file" << std::endl;
			return 1;
		}
		else
		{
			std::string line;
			while(std::getline(file, line))
			{
				std::cout << line << std::endl;
			}
		}
			
	}
	else 
		return 1;
	return 0;
}
