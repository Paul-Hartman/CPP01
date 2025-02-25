#include <iostream>
#include <fstream>
#include <string>
#define ARGS 0
#define INPUT 1
#define OUTPUT 2

int print_error(int error)
{
	std::cerr << "Error: ";
	if(error == ARGS)
		std::cerr << "Invalid number of arguments" << std::endl;
	else if(error == INPUT)
		std::cerr << "Could not open input file" << std::endl;
	else if(error == OUTPUT)
		std::cerr << "Could not open output file" << std::endl;
	return 1;
}

int main(int argc, char const *argv[])
{
	if(argc == 4)
	{
		std::string filename = argv[1];
		std::string str1 = argv[2];
		std::string str2 = argv[3];
		std::ifstream infile(filename.c_str());
		if(!infile.is_open())
			return (print_error(INPUT));
		else
		{
			std::string line;
			std::string newfilename = filename + ".replace";
			std::ofstream outfile(newfilename.c_str());
			if(!outfile.is_open())
			{
				infile.close();
				return (print_error(OUTPUT));
			}
			while(std::getline(infile, line))
			{
				std::size_t found = line.find(str1);
				while(found != std::string::npos)
				{
					line.insert(line.find(str1) + str1.length(), str2);
					line.erase(line.find(str1), str1.length());
					found = line.find(str1);
				}
				outfile << line << std::endl;
			}
			infile.close();
			outfile.close();
		}
	}
	else 
		return (print_error(ARGS));
	return 0;
}
