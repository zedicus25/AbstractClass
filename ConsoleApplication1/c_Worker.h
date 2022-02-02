#pragma once
#include "c_Employer.h"
class c_Worker : public c_Employer
{
private:
	std::string placeOfWork;
public:
	c_Worker(std::string name, std::string lastName, int salary, char gender, std::string placeOfWork) : c_Employer(name, lastName, salary, gender)
	{
		this->position = "Worker";
		this->placeOfWork = placeOfWork;
	}

	virtual void print();
};

