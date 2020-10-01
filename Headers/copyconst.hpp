class CopyConst
{
private:
    /* data */
public:
    CopyConst(int, int, int);
    CopyConst(const CopyConst &);
    ~CopyConst();
    int x;
    int y;
    int *p;
};

