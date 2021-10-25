#pragma once
#include <iostream>
#include <string.h>
using namespace std;

class Computer
{
    public:
        Computer();
        Computer(char*, int);
        int getPrice();
       // char getName();
        virtual void show();
        void setName(char*);
        void setPrice(int);
    protected:
        char name[50];
        int price;
    private:
};



