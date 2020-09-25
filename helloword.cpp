#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int a, q;
    cin >> a >> q ;
    int **p_arr = new int*[a] ;
    for (int i =0 ; i < a ;i++)
    {
        int larr;
        cin >> larr;
        int *arr = new int[larr];
        for(int j=0 ; j < larr ; j++){
            int tmp;
            cin >> tmp;
            arr[j] = tmp;
        }
        p_arr[i] = arr;
    }
    for ( int i=0; i < q ; i++){
        int j,k;
        cin>> j >> k;
        cout << p_arr[j][k] << endl;
    }
}
