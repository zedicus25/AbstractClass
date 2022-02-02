#pragma once
#include <iostream>
#include <string>
class c_Employer {
protected:
	std::string name;
	std::string lastName;
	std::string position;
	char gender;
	int salary;
	c_Employer(std::string name, std::string lastName,std::string position, int salary, char gender);
public:
	virtual void print() = 0;
};
