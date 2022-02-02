#include "c_President.h"

void c_President::print()
{
	std::cout << this->name << "\t" << this->lastName <<  "\n";
	std::cout << this->position << "\t" << this->country << "\t" << this->salary << "\t" << this->gender << "\n\n";
}
