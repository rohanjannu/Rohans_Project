#include<iostream>
using namespace std;
int main()
{
    int a,b,res=0;
    cin>>a>>b;
    int x=min(a,b);
    for(int i=1;i<=x;i++)
    {
        if(a%i==0 && b%i==0)
        {
            res=i;
        }
    }
cout<<res;
return 0;
}