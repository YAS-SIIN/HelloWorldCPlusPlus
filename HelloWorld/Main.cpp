#include <iostream>

void LogMessage(const char* message);

int main()
{
	std::cout << "Hello, World!" << std::endl;
	LogMessage("This is a simple C++ program.");
	std::cin.get(); 
	return 0;
}
