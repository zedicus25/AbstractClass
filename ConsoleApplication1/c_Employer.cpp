#include "c_Employer.h"

c_Employer::c_Employer(std::string name, std::string lastName, int salary, char gender)
{
	this->name = name;
	this->lastName = lastName;
	this->position = "NONE";
	try
	{
		if (salary < 0 || salary > 100000) {
			this->salary = 1500;
			throw std::string("Salary cannot be negative or more 100000\n");
		}
		else {
			this->salary = salary;
		}
	}
	catch (std::string er)
	{
		std::cout << "Error " << er;
	}
	this->gender = gender;
}
