#include<iostream>
using namespace std;

class base
{
    public:
    int x;
    base(int z) : x(z)
    {
        cout<<"Base constructor called"<<endl;
    }
};
class derived : protected base
{
private:
int y;
public:
derived(int a,int b) : base(a),y(b)
{
    cout<<"Derived constructor called"<<endl;
}

void print()
{
    cout<<x<<" "<<y<<endl;
}
};
int main()
{
    derived d(10,20);
    d.print();
    return 0;
}
