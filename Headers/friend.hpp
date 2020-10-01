class B;

class A
{
private:
    
public:
    //A(/* args */);
    //~A();
    void setSecretValue(B &, int);
};


class B
{
private:
    friend class A;
    int secretValue;
public:
    //B(int);
    //~B();
    int getSecretValue() {return secretValue;}
};

