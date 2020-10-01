#include <iostream>
#include "friend.hpp"

using namespace std;

int main(int argc, char const *argv[])
{
    B objB;
    A objA;

    objA.setSecretValue(objB, 600);

    cout << objB.getSecretValue() << endl;
    return 0;
}
