#include<iostream>
using namespace std;

int main()
{
    int a,b,i;
    cin>>a>>b;
    int x=max(a,b);
    int l =a*b;
    for(i=x;i<=l;i++)
    {
        if(i%a==0 && i%b==0)
        {
            cout<<"LCM is "<<i<<endl;
            break;
        }
    }
return 0;
}
