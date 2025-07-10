#include<iostream>
using namespace std;


int fun(int x,int y)
{
return x+y;
}
int main()
{
    int a=5,b=5;
    int (*ptr)(int,int) = fun;
    cout<<ptr(a,b)<<endl;
    return 0;
}