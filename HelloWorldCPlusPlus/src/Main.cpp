#include <iostream>
#include "Logger.h"
#include "Player.cpp"

using namespace std;

int Multiply(int a, int b);


int main()
{
	char test = 't';
	cout << "Hello, World!" << endl;
	cout << test << endl;
	LogMessage("This is a simple C++ program.");
	int a = 5;
	int b = 10;
	bool isGreater = a > b;
	int result = 0;
	if (isGreater)
	{
		result = Multiply(a, b);
	}

	cout << result << endl;

	LogMessage("Enter number of elements greater than 0: ");
	int n;
	cin >> n;

	LogMessage("Printing with for loop");
	for (size_t i = 1; i <= n; i++)
	{
		cout << i << endl;
	}

	LogMessage("Printing with while loop");
	size_t i = 1;
	while (i <= n)
	{
		cout << i << endl;
		i++;
	}

	LogMessage("Printing with do while loop");
	i = 1;
	do
	{
		cout << i << endl;
		i++;
	} while (i <= n);

	double aa = (double)n;
	void* ptr = nullptr;
	int* intPtr = &n;
	void* anotherPtr = &n;
	int** ptrToAnotherPtr = &intPtr;

	// access to pointer data
	*intPtr = 10;
	cout << "Value of n through pointer: " << n << endl;

	int& refToN = n;
	refToN = 20;
	cout << "Value of n through reference: " << n << endl;

	char* buffer = new char[8];
	memset(buffer, 0, 8);

	char** charPtrPtr = &buffer;

	delete[] buffer;

	// Work with const variables and pointers
	int aaa = 10;
	const int* p = &n;
	p = &aaa;

	int bbb = 10;
	int* const q = &bbb;
	*q = 20;

	int ccc = 10;
	const int* const r = &ccc;

	// Use class
	Player player("Player1");
	player.id = 1;
	player.x = 10;
	player.y = 20;
	player.speed = 5;
	player.MovePlayer(2, 1);
	cout << "Player name: " << player.GetName() << endl;
	 

	LogMessage("Press Enter to exit...");
	cin.get();
}

struct MyStruct
{

	std::string GetName() {
		return "m_Name";
	}
};