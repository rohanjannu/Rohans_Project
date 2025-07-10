#include<iostream>
using namespace std;

class Test
{
    public:
    Test(int a=0,int b=0)
    {
        cout<<"Constructor called\n";
    }
    ~Test()
    {
        cout<<"Destructor called\n";
    }
};

class SP
{
    public:
    Test *sp;
    SP(Test *p=nullptr){sp=p;}
    ~SP(){cout<<"Pointer unallocated\n";}
    Test& operator *(){return *sp;}
    Test* operator ->(){return sp;}
};

int main()
{
    SP sp(new Test(10,20));
    return 0;
}