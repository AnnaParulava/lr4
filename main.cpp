// Файл main.cpp — главный модуль
#include "include\computer.h"
#include "include\desktopcomputer.h"
#include "include\laptop.h"
using namespace std;

int main()
{
    DesktopComputer dc1("MSI Codex 5 11TC-479RU",128990 , "MSI");
    DesktopComputer dc2("iRU Home 315",77990,"iRU");
    Laptop laptop1("Apple MacBook Air 13 Late",89890,2020);
    Laptop laptop2("HP PAVILION 15-eh0040ur",44490,2019);
    Computer* comp[4]; // Массив указателей на базовый класс
    int average=0, i;

    //Объединяем объекты разных типов в одном массиве
    comp[0]=&dc1;
    comp[1]=&dc2;
    comp[2]=&laptop1;
    comp[3]=&laptop2;

    //Вывод данных с помощью массива указателей
    for(i=0; i<4; i++){
        comp[i]->show(); //проявляется полиморфизм
    }

    //Расчет среднего возраста
    for(i=0; i<4; i++)
    {
        average += (*(comp+i))->getPrice();
    }
    average /= 4;
    cout << "Average price:  " << average << endl;
    return 0;
}
