#include<iostream>
using namespace std;

class rohan
{
    int a,b;
    public:
    rohan() : a(0),b(0)
    {
        cout<<"in default\n";
        cout<<a<<" "<<b<<" ";
    }
    rohan(int x1,int x2): a(x1),b(x2)
    {
        cout<<"In parameterised\n";
        cout<<a<<" "<<b<<" ";
    }

};

int main()
{
    rohan r;
    rohan b(10,20);

}