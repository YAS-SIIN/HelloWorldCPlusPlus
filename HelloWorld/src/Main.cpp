#include <iostream>
#include "Logger.h"

int Multiply(int a, int b);

int main()
{
	char test = 't';
	std::cout << "Hello, World!" << std::endl;
	std::cout << test << std::endl;
	LogMessage("This is a simple C++ program.");
	int a = 5;
	int b = 10;
	std::cout << Multiply(a, b) << std::endl;
	std::cin.get(); 
}
