#include "desktopcomputer.h"

DesktopComputer::DesktopComputer(char* nname, int price, char* ncompany)
{
    strcpy(name, nname);
    strcpy(company, ncompany);
    this->price = price;
}

void DesktopComputer::setCompany(char* ncompany)
{
      strcpy(company, ncompany);
}


void DesktopComputer::show()
{
    cout << "Name: " << name << "  Price:  " << price << "   Company: "<< company;
    cout << endl;
}
