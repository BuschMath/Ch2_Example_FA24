#include "Customer.h"
#include <iostream>

Customer::Customer()
{
    id = 0;
	name = "";
	address = "";
	phone = "";
	email = "";
	birthdate = "";
}

Customer::Customer(int id_, std::string name_, std::string address_, std::string phone_,
    std::string email_, std::string birthdate_)
{
    id = id_;
	name = name_;
	address = address_;
	phone = phone_;
	email = email_;
	birthdate = birthdate_;
}

Customer::~Customer()
{
}

int Customer::getId()
{
    return id;
}

void Customer::setId(int id_)
{
	id = id_;
}

std::string Customer::getName()
{
    return name;
}

void Customer::setName(std::string name_)
{
	name = name_;
}

std::string Customer::getAddress()
{
    return address;
}

void Customer::setAddress(std::string address_)
{
	address = address_;
}

std::string Customer::getPhone()
{
    return phone;
}

void Customer::setPhone(std::string phone_)
{
	phone = phone_;
}

std::string Customer::getEmail()
{
    return email;
}

void Customer::setEmail(std::string email_)
{
	email = email_;
}

std::string Customer::getBirthdate()
{
    return birthdate;
}

void Customer::setBirthdate(std::string birthdate_)
{
	birthdate = birthdate_;
}

void Customer::display()
{
	std::cout << "Customer ID: " << id << std::endl;
	std::cout << "Name: " << name << std::endl;
	std::cout << "Address: " << address << std::endl;
	std::cout << "Phone: " << phone << std::endl;
	std::cout << "Email: " << email << std::endl;
	std::cout << "Birthdate: " << birthdate << std::endl;
}
