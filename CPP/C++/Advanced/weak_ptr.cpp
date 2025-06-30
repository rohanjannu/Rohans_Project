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
    weak_ptr<test> ptr1;
    {
    shared_ptr<test> ptr2 = make_shared<test>(10);
    ptr1=ptr2;
    cout<<ptr1.use_count()<<endl;
    shared_ptr<test> ptr6 = ptr1.lock();  //creates a shared pointer of the object pointed by ptr1
    }
    cout<<ptr1.use_count()<<endl;
    cout<<ptr1.expired()<<endl; //prints whether that pointer exists or not, gives 1 if yes and 0 is no 
    return 0;
}