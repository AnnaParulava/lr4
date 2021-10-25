#pragma one
#include <Computer.h>


class DesktopComputer : public Computer
{
    public:
        DesktopComputer(char*, int, char*);
        void setCompany(char*);
       // char getCompany();
        void show();
    protected:
    private:
        char company[30];
};


