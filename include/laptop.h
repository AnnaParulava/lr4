#pragma one

#include <Computer.h>

class Laptop : public Computer
{
    public:
        Laptop(char*, int, int);
        void setYearOfCommissioning(int);
        int getYearOfCommissioning();
        void show();

    protected:

    private:
        int yearOfCommissioning;
};


