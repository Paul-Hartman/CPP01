#include <iostream>

int main(int argc, char const *argv[])
{
	(void)argc;
	(void)argv;
	std::string statement = "HI THIS IS BRAIN";
	std::string *stringPTR = &statement;
	std::string &stringREF = statement;

	std::cout << "memory adress of string var: " << &statement << std::endl;
	std::cout << "memory adress of stringPTR: " << stringPTR << std::endl;
	std::cout << "memory adress of stringREF: " << &stringREF << std::endl;

	std::cout << "value of string var: " << statement << std::endl;
	std::cout << "value of stringPTR: " << *stringPTR << std::endl;
	std::cout << "value of stringREF: " << stringREF << std::endl;

	return 0;
}
