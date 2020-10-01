#include "copyconst.hpp"

CopyConst::CopyConst(int x, int y, int value)
{
    this->x = x;
    this->y = y;
    this->p = new int[value];
}

CopyConst::~CopyConst()
{
    delete p;
}

CopyConst::CopyConst(const CopyConst & obj)
{
    this->p = new int[*(obj.p)];
    this->x = obj.x;
    this->y = obj.y;
}