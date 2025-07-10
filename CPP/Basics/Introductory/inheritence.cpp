#include<iostream>
using namespace std;

class base
{
    public:
    int a=1;

    void print()
    {
        cout<<"a = "<<a<<endl;
    }
    protected:

    int b=2;

    void print1()
    {
        cout<<"b ="<<b<<endl;
    }
};

class derived : public base
{
    private:
    int c=3;

    public:
    void printe()
    {
        print1();
        cout<<"c ="<<c<<endl;
       
    }

};

int main()
{
    base b;
    derived d;
    b.print();
//    b.print1();
    d.printe();
    return 0;
}