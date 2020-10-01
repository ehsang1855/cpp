
class Position
{
private:
    int x, y;
public:
    Position(int, int);
    ~Position();
    void getPosition() const; // use const for can use in counst instance
    void setPosition(int, int);
    friend void setX(Position &, int);
};

