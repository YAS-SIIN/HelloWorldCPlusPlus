#include <iostream>
#include "Logger.h"

int Multiply(int a, int b);

int main()
{
	std::cout << "Hello, World!" << std::endl;
	LogMessage("This is a simple C++ program.");
	std::cout << Multiply(3, 4) << std::endl;
	std::cin.get(); 
}
