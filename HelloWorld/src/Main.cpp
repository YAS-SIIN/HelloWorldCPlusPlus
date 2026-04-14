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
	bool isGreater = a < b;
	int result = 0;
	if (isGreater)
	{
		result = Multiply(a, b);
	}

	std::cout << result << std::endl;

	LogMessage("Enter number of elements: ");
	int n;
	std::cin >> n;

	for (size_t i = 1; i <= n; i++)
	{
		std::cout << i << std::endl;
	}

	std::cin.get(); 
}
