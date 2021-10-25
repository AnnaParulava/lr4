#include "laptop.h"

Laptop::Laptop(char* nname, int price, int yearOfCommissioning)
{
    strcpy(name, nname);
    this-> price = price;
    this -> yearOfCommissioning=yearOfCommissioning;
}

void Laptop::setYearOfCommissioning(int yearOfCommissioning)
{
    this -> yearOfCommissioning = yearOfCommissioning;
}

int Laptop::getYearOfCommissioning()
{
    return yearOfCommissioning;
}

void Laptop::show()
{
    cout << "Name:  " << name << "   Year of commissioning:  " << yearOfCommissioning << "   Price:  "<< price << endl;
}
