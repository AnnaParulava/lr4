#include "computer.h"

using namespace std;
//Конструктор по умолчанию
Computer::Computer()
{
    strcpy(name, "Noname");
    price = 0;
}

 //Конструктор с параметрами
Computer::Computer(char* nname, int nprice)
    : price(nprice)
{
    strcpy(name, nname);
}

int Computer::getPrice() {
    return price; }


void Computer::show() {

    cout << "Name:  " << name << "   Price:  " << price << endl;
}

void Computer::setName(char* nname)
{
    strcpy(name, nname);
}


void Computer::setPrice(int price)
{
    this->price = price;
}
