#include<iostream>
using namespace std;

class base
{
    public:
    virtual void print()
    {
        cout<<"In base class"<<endl;
    }
};
class derived : public base
{
    public:
    void print() override
    {
        cout<<"In derived class"<<endl;
    }
};
class derived1 : public base
{
    public:
    void print() override
    {
        cout<<"In derived1 class"<<endl;
    }
};

int main()
{
    base b;
    derived d;
    derived1 k;
    base *p = &d;
    base *q =&k;
    q->print();
    p->print(); // This will not work because print() is not virtual
}