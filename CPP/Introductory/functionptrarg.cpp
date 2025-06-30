#include<iostream>
using namespace std;

int add(int a,int b)
{
    return a+b;
}
int mul(int a,int b)
{
    return a*b;
}

int fun(int a,int b,int(*ptr)(int,int))
{   
    return (ptr(a,b));
}

int main()
{
    int a=5,b=5;
    cout<<fun(a,b,add)<<endl;
    cout<<fun(a,b,mul)<<endl;
    return 0;
}
