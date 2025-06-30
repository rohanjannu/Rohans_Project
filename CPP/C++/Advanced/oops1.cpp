#include<iostream>
using namespace std;

class construct
{
    int *ptr;
    public:
    construct()
    {
        cout<<"Default"<<endl;
    };
    construct(int x)  //parameterised constructor
    {
        ptr=new int(x);
    }

    construct(const construct &a)  //deep copy constructor
    {
        int val = *(a.ptr);
        ptr = new int(val);
    }
    void print()
    {
        cout<<*ptr<<endl;
    }
};
   
int main()
{
    construct c1(1);
    construct c2(c1); 
    c2.print();
    return 0;
}