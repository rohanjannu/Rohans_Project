#include<iostream>
using namespace std;

int main()
{
    int a=00000101,num=0,base=1,q;

    while(a>9)
    {
        q=a%10;
        num+=(q*base);
        base*=10;
        a=a/10;
    }
    cout<<num;
    return 0;
}