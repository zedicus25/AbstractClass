#pragma once
#include "c_Employer.h"
class c_Manager :public c_Employer
{
private:
	std::string placeOfWork;
public:
	c_Manager(std::string name, std::string lastName, int salary, char gender, std::string placeOfWork) : c_Employer(name,lastName,salary,gender)
	{
		this->position = "Manager";
		this->placeOfWork = placeOfWork;
	}

	virtual void print();
};

