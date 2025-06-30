#include<iostream>
using namespace std;

class rohan
{
    public:
    int *ptr;
    rohan(int a)
    {
        ptr=new int(a);
    }
    void set(int c)
    {
        *ptr=c;
    }
    void print()
    {
        cout<<"The value of data is "<<*ptr<<endl;
    }
};

int main()
{
    rohan a(10);
    rohan b(a);
    a.set(10);
    a.print();
    b.print();
    return 0;
}