#include<iostream>
using namespace std;

class SP
{
    public:
    int *ptr;
    SP(int *p=NULL)
    {
        ptr=p;
    }
    ~SP()
    {
        delete ptr;
    }
    int &operator*()
    {
        return *ptr;
    }
};

int main()
{
    SP sp(new int());
    *sp=20;
    cout<<*sp;
    return 0;
}