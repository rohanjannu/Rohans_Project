#include<iostream>
using namespace std;

int main()
{
    int a,b,num=0,i;
    cout<<"enter the two numbers whose greatest common divisor you want to find\n";
    cin>>a>>b;
    int c=min(a,b);

    for(i=1;i<=c;i++)
    {
        if(a%i==0 && b%i==0)
        {
            num=i;
            
        }
        
    }

    cout<<"GCD is "<<num;
    return 0;
}