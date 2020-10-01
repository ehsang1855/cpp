#ifndef PEOPLE_H_INCLUDED
#define PEOPLE_H_INCLUDED
#include <iostream>
using namespace std;

class PersonalData
{
    private:
        short age;
        string name;
        int *p;
    public:
        PersonalData();
        PersonalData(short);
        ~PersonalData();
        void setAge(short);
        short getAge();
};



#endif