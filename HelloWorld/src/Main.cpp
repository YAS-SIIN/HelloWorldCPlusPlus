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
	bool isGreater = a > b;
	int result = 0;
	if (isGreater)
	{
		result = Multiply(a, b);
	}

	std::cout << result << std::endl;

	LogMessage("Enter number of elements greater than 0: ");
	int n;
	std::cin >> n;

	LogMessage("Printing with for loop");
	for (size_t i = 1; i <= n; i++)
	{
		std::cout << i << std::endl;
	}

	LogMessage("Printing with while loop");
	size_t i = 1;
	while (i <= n)
	{
		std::cout << i << std::endl;
		i++;
	}

	LogMessage("Printing with do while loop");
	i = 1;
	do
	{
		std::cout << i << std::endl;
		i++;
	} while (i <= n);

	double aa = (double)n;
	void* ptr = nullptr;
	int* intPtr = &n;
	void* anotherPtr = &n;

	// access to pointer data
	*intPtr = 10;
	std::cout << "Value of n through pointer: " << n << std::endl;


	char* buffer = new char[8];
	memset(buffer, 0, 8);

	char** charPtrPtr = &buffer;

	delete[] buffer;

	LogMessage("Press Enter to exit..."); 
	std::cin.get();  
}
