#include<iostream>
using namespace std;
class constructors
{
    public:
    int *ptr;
    constructors(int x)//constructors have no return types //always initialise the value of a pointer with new variable
    {
        ptr  = new int(x);

    }  
    constructors(const constructors &obj)
    {
        int val = *(obj.ptr);
        ptr = new int(val);
    }
    void set(int a) //initialisers can only be used for constructors
    {
        *ptr = a;
    }
    inline void print()
    {
        cout<<"The value of the stored variable is "<<*ptr<<endl;
    }
};

int main()
{
    constructors a(10);
    constructors b(a);
    a.print();
    b.print();
    return 0;
}