#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int a;
    int b;
    a=80;
    b=10;
    cout << (double)a / b << endl; //explict way c
    a = int(b);
    a = static_cast<int>(b);//explict way c
    return 0;
}
 