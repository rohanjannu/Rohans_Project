#include<iostream>
using namespace std;

int main()
{
    int a,b,i,num=0;
    cout<<"Enter the number whose LCM you want to find\n";
    cin>>a>>b;
    int c=max(a,b);
    int d=a*b;

    for(i=c;i<=d;i++)
    {
        if(i%a==0 && i%b==0)
        {
            cout<<i;
            break;
        }
    }
return 0;
    }