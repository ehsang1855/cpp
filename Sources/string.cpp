#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int * multiplyBy10(int *, int);
void multiplyArrayBy(int *, int, int);
int main() {
    // int a = 10;
    // int *b = multiplyBy10(&a, 5);
    // cout << a << endl;
    // cout << *b << endl;
    // *b = 15;
    // cout << a << endl;
    // cout << *b << endl;
    int array[5];
    for (int i = 0; i < sizeof(array)/sizeof(array[0]); i++)
    {
        array[i] = i;

    }
    multiplyArrayBy(array, 5, sizeof(array)/sizeof(array[0]));
    for (int i = 0; i < sizeof(array)/sizeof(array[0]); i++)
    {
        cout << "array [" << i << "] = "  << array[i] <<endl;
    }
    
    return 0;
}

int * multiplyBy10(int * var, int amount)
{
    *var *= amount;
    return var; 
}
void multiplyArrayBy(int *array, int amount, int sizeOfArray)
{
    for (int  i = 0; i < sizeOfArray; i++)
    {
        array[i] = array[i] * amount;
    }
    
}