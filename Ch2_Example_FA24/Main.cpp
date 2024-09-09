#include <iostream>

// Function Prototype
void PrintMessage();

int main()
{
	// Function call
	PrintMessage();
	PrintMessage();

	double x = 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1;
	std::cout << x << std::endl;

	int y = 1;

	if (y == x)
	{
		std::cout << "Equal\n";
	}
	else
	{
		std::cout << "Not Equal\n";
	}

	return 0;
}

// Function Definition
void PrintMessage()
{
	std::cout << "Hello world!\n";
	std::cout << "Hello world!\n";
	std::cout << "Hello world!\n";
	std::cout << "Hello world!\n";
	std::cout << "Hello world!\n";
}