#include<iostream>
using namespace std;

class rohan
{
    public:
    int a;
    int b;

    void fun()
    {
        cout<<"In the class instance\n";
    }

    rohan() : a(0),b(0)
    {

    };

    rohan(int x, int y) : a(x),b(y)
    {

    };
};


int main()
{
    rohan a,b;
    a.fun();
    b.fun();
    rohan *ptr = new rohan(10,20);
    cout<<ptr->a<<" "<<ptr->b<<endl;
    return 0;
}