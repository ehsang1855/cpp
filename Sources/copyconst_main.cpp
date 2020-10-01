#include <iostream>
#include "copyconst.hpp"

using namespace std;

int main(int argc, char const *argv[])
{
    int a = 10;
    int b = a;
    
    a = 60;
    
    cout << "a : " << a <<endl;    
    cout << "b : " << b <<endl; 

    CopyConst obj1(100, 200, 60);
    CopyConst obj2 = obj1;

    obj2.x = 200;
    *(obj1.p) = 700;

    cout << "obj1.x : " << obj1.x <<endl;    
    cout << "obj1.y : " << obj1.y <<endl; 
    cout << "*(obj1.p) : " << *(obj1.p) <<endl; 
    cout << "obj2.x : " << obj2.x <<endl; 
    cout << "obj2.y : " << obj2.y <<endl;    
    cout << "*(obj2.p) : " << *(obj2.p) <<endl; 
   

    return 0;
}
