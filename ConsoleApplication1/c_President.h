#pragma once
#include "c_Employer.h"
class c_President : public c_Employer
{
private:
	std::string country;
	int termOfOffice;
public:
	c_President(std::string name, std::string lastName, std::string position, int salary, char gender, std::string country, int termOfOffice) : c_Employer(name, lastName,position, salary, gender) {
		this->country = country;
		try
		{
			if (termOfOffice < 0 || termOfOffice > 5) {
				this->termOfOffice = 1;
				throw std::string("Term of office cannot be negative or greater 5 years\n");
			}
			else {
				this->termOfOffice = termOfOffice;
			}
		}
		catch (std::string er)
		{
			std::cout << "Error " << er; 
		}
	}

	virtual void print();
	
};

