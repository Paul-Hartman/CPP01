#include <iostream>
#include <fstream>
#include <string>


int main(int argc, char const *argv[])
{
	if(argc == 4)
	{
		std::string filename = argv[1];
		std::string str1 = argv[2];
		std::string str2 = argv[3];
		std::ifstream file(filename.c_str());
		if(!file.is_open())
		{
			std::cout << "Error: could not open file" << std::endl;
			return 1;
		}
		else
		{
			std::string line;
			std::string newfilename = filename.append(".replace");
			std::ofstream outfile(newfilename.c_str());
			if(!outfile.is_open())
			{
				std::cout << "Error: could not open file" << std::endl;
				return 1;
			}
			while(std::getline(file, line))
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
			file.close();
			outfile.close();
		}
			
	}
	else 
		return 1;
	return 0;
}
