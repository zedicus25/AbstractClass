#include "c_President.h"
#include "c_Manager.h"
#include "c_Worker.h"

int main()
{
    c_President* pr = new c_President("Ivan", "Ivanov", 10000, 'M', "USA", 4);
    pr->print();

    c_Manager* mn = new c_Manager("Petr", "Petrov", 1000, 'M', "MacDonalds");
    mn->print();

    c_Worker* wr = new c_Worker("Stepan", "Stepanov", 100, 'F', "Factory");
    wr->print();

    delete pr;
    delete mn;
    delete wr;
    
}