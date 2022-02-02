#include "c_Worker.h"

void c_Worker::print()
{
	std::cout << this->name << "\t" << this->lastName << "\n";
	std::cout << this->position << "\t" << this->placeOfWork << "\t" << this->salary << "\t" << this->gender << "\n\n";
}
