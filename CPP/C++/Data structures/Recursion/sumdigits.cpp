#include<iostream>
using namespace std;


int getsum(int n)
{
    if(n==0)
    {
        return 0;
    }
    return n%10+getsum(n/10);
}

int main()
{
    int a,n=1656;
    cout<<getsum(n);
    return 0;
}