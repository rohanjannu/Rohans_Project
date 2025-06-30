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
        cout<<"Destructor called\n";
    }
    void func()
    {
        cout<<"Success!\n";
    }
};

int main()
{
    shared_ptr<test> ptr1 = make_shared<test>(10);
    shared_ptr<test> ptr2 = ptr1;
    ptr2->func();
    cout<<ptr1.use_count()<<endl;
    return 0;
}