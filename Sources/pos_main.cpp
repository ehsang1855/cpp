#include <iostream>
#include "position.h"

using namespace std;

void setX(Position &, int);

int main(int argc, char const *argv[])
{
    Position dog(10, 50);
    dog.getPosition();
    dog.setPosition(100,500);
    dog.getPosition();

    const Position house(100, 200);
    house.getPosition();
    //dog.setPosition(100,500); cant use this

    setX(dog, 255);
    dog.getPosition();

    return 0;
}

void setX(Position & obj, int val)
{
    obj.x = val;
}