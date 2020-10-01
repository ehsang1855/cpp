#include <iostream>
#include "position.h"

Position::Position(int x, int y)
{
    this->x = x;
    this->y = y;
}

Position::~Position()
{

}

void Position::getPosition() const
{
    std::cout << "x :" << x <<std::endl;
    std::cout << "y :" << y <<std::endl;
}
void Position::setPosition(int x, int y)
{
    this->x = x;
    this->y = y;
}