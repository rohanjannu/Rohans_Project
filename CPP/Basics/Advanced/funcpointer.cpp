#include<iostream>
using namespace std;

void print()
{
    cout<<"In print function through function pointer\n";
}

int sum(int x=0,int y=0)
{
    return x+y;
}


int main()
{
    int a,b;
    void (*func1_ptr)() = &print;  //1st method to declare
    auto fun2_ptr = sum;
    func1_ptr();
    cout<<fun2_ptr(5,5);
}