#include <iostream>

using namespace std;

// Function Prototype
void PrintMessage();

int main()
{
	// Function call
	PrintMessage();
	PrintMessage();

	double x = 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1;
	cout << x << endl;

	int y = 1;

	if (y == x)
	{
		cout << "Equal\n";
	}
	else
	{
		cout << "Not Equal\n";
	}

	return 0;
}

// Function Definition
void PrintMessage()
{
	cout << "Hello world!\n";
	cout << "Hello world!\n";
	cout << "Hello world!\n";
	cout << "Hello world!\n";
	cout << "Hello world!\n";
}