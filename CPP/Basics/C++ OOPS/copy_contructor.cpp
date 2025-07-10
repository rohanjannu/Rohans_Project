#include<iostream>
using namespace std;

class rohan
{
    int *ptr;
    public:
    rohan(int x)
    {
        ptr = new int(x);
    }
    rohan(const rohan &r)  //copy
    {
        int val=*(r.ptr);
        ptr = new int(val);
    }
    void set(int x)
    {
        *ptr=x;
    }
    void print()
    {
        cout<<*ptr<<endl;
    }
};

int main()
{

    rohan a(10);
    rohan b(a); // Copy constructor is called

}