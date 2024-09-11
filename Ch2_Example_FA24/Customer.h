#ifndef CUSTOMER_H
#define CUSTOMER_H

#include <string>

class Customer
{
public:

	// Constructors and Destructor
	Customer();
	Customer(int id_, std::string name_, std::string address_, std::string phone_, 
		std::string email_, std::string birthdate_);
	~Customer();

	// Getters and Setters
	int getId();
	void setId(int id);

	std::string getName();
	void setName(std::string name);

	std::string getAddress();
	void setAddress(std::string address);

	std::string getPhone();
	void setPhone(std::string phone);

	std::string getEmail();
	void setEmail(std::string email);

	std::string getBirthdate();
	void setBirthdate(std::string birthdate);

	// Display customer infomration method
	void display();

private:

	int id;						// Customer ID
	std::string name;			// Customer Name
	std::string address;		// Customer Address
	std::string phone;			// Customer Phone
	std::string email;			// Customer Email
	std::string birthdate;		// Customer Birthdate
};

#endif // !CUSTOMER_H

