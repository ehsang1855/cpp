#include <iostream>
#include "inheritance.hpp"

using namespace std;

void operationOnPoints();

int main(int argc, char const *argv[])
{
    operationOnPoints();
    return 0;
}

void operationOnPoints()
{
    Point2D p1(2, 50);
    cout << p1.getX() << endl;
    cout << p1.getY() << endl;
    p1.setXY(25, 35);
    cout << p1.getX() << endl;
    cout << p1.getY() << endl;

    p1.Point::setX(20); // get overloded func

}