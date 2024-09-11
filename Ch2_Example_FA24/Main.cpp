// Header information...

#include <iostream>
#include "Customer.h"

int main()
{
	// Create a Customer object
	Customer c1(1, "John Doe", "123 Main St", "doe@iccc.cc.ia.us", "555-1234", "");

	// Display the Customer object
	c1.display();

	return 0;
}