#include<iostream>
using namespace std;

int main()
{
    int a,num=0,n,l=0,s=1;
    cout<<"Enter the binary number\n";
    cin>>a;
    while(a>0)
    {
        n = a%10;
        num=num+(n*s);
        s=s*2;
        a=a/10;
    }
    cout<<num<<endl;
    return 0;
}