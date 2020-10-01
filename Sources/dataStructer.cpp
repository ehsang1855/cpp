#include <iostream>

using namespace std;
struct personalData
{
    string name;
    string surname;
    string telephoneNumber;
    short age;
};
void test(personalData *);

int main(int argc, char const *argv[])
{
    personalData person[5];
    person[0].name = "ehsan";
    person[0].surname = "ghasemi";
    person[0].telephoneNumber = "09389968402";
    person[0].age = 25;
    
    person[1].name = "ehsan";
    person[1].surname = "ghasemi";
    person[1].telephoneNumber = "09389968402";
    person[1].age = 30;
    
    /*cout << person[0].name << endl;
    cout << person[0].surname << endl;
    cout << person[0].telephoneNumber << endl;
    cout << person[0].age << endl;
    cout << (*person).name << endl;
    cout << (*&person[0]).name << endl;
    cout << (person)->name << endl;
    */
    personalData *p = person;
    test(p);
    cout << p[1].name  <<endl;
    return 0;
}

void test(personalData *person)
{
    person[1].name = "Ehsan";
}