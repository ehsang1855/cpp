class Point
{
protected:
    int x;
public:
    Point(int = 0);
    ~Point();
    int getX() {return x;}
    void setX(int);
};

class Point2D : public Point
{
protected:
    int y;
public:
    Point2D(int = 0,int = 0);
    ~Point2D();
    int getY() {return y;}
    void setX(int); // overload  setX func from Point class
    void setY(int);
    void setXY(int, int);
};

