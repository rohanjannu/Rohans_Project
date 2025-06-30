#include<iostream>
using namespace std;

class base
{
    public:
    int a;
    base()
    {
        cout<<"Base"<<"\n";
    }
    virtual void print()
    {
        cout<<"Base print\n";
    }
    
};

class derived : public base
{
    public:
     derived()
    {
        cout<<"derived"<<"\n";
    }
    void print() override
    {
        cout<<"derived print\n";
    }
    

};
int main()
{
base b;
derived d;
base *ptr = &d;
ptr->print();
    return 0;
}

