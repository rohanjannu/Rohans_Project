#include<iostream>
#include<memory>
using namespace std;


class test
{
    public:
    int a;
    test(int x=0):a(x)
    {
        cout<<"Constructor called\n";
    }
    ~test()
    {
        cout<<"Desturctor called\n";
    }
    void func()
    {
        cout<<"Success!\n";
    }
};

int main()
{
    // we can move a unique_ptr using move() but cannot reassign.
   // unique_ptr<test> ptr = make_unique<test>(10); 
    unique_ptr<test> ptr(new test(10));
    ptr->func();
    return 0;
}