#include "inheritance.hpp"

Point::Point(int x)
{
    this->x = x;
}

Point::~Point()
{
}

void Point::setX(int x)
{
    this->x = x;
}



Point2D::Point2D(int x, int y) : Point(x)
{
    //this->x = x;

    this->y = y;
}

Point2D::~Point2D()
{
}

void Point2D::setY(int y)
{
    this->y = y;
}
void Point2D::setXY(int x, int y)
{
    setX(x);
    setY(y);
}

void Point2D::setX(int x)
{
    this->x = x;
}