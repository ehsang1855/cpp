#include <iostream>
#include "people.h"

using namespace std;

void test()
{
    PersonalData *pointer = new PersonalData[5];

    delete []pointer;
}

int main(int argc, char const *argv[])
{
    PersonalData person;
    PersonalData person2;
    person.setAge(35);
    cout<< person.getAge()<<endl;
    cout<< person2.getAge()<<endl;
    test();
    return 0;
}