#pragma once
#include <iostream>
#include <string>
class c_Employer {
protected:
	std::string name;
	std::string lastName;
	char gender;
	int salary;
	c_Employer(std::string name, std::string lastName, int salary, char gender);
public:
	virtual void print() = 0;
	virtual std::string getName() = 0;
	virtual std::string getLastName() = 0;
	virtual std::string getSalary() = 0;
};
