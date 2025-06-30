#include<iostream>
using namespace std;

class base
{
    public:
    int a=5;
    private:
    int b=10;
    protected:
    int c=20;
};

class derived : public base
{
 
};

int main()
{
    derived d;
    cout<<d.a<<endl;
}
