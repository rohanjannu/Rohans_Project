#include<iostream>
using namespace std;

class base
{
    public:
    virtual void print()
    {
        cout<<"In base\n";
    }
};
class derived : public base
{
    public:
    void print() override
    {
        cout<<"In derived\n";
    }
};

int main()
{
    base b;
    derived d;
    base *ptr = new derived;
    ptr->print();
    return 0;
}