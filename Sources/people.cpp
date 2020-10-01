#include "people.h"
void PersonalData::setAge(short age)
{
    if (age < 0)
    {
        this->age = 0;
        return;
    }
    
    this->age = age;
}
short PersonalData::getAge()
{
     return age;
}
PersonalData::PersonalData()
{
    this->age = 14;
    p = new int[5];
}
PersonalData::PersonalData(short age)
{
    this->age = age;
    p = new int[5];
}


PersonalData::~PersonalData()
{
    cout << "distractor run \n";
    delete [] p;
}
