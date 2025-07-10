#include<iostream>
using namespace std;
int main()
{
    int a,sum;
    cin>>a;
    int k=0,l=1;
    cout<<k<<" "<<l<<" ";
    for(int i=0;i<=a;i++)
    {   sum=l+k;;
        cout<<sum<<" ";
        k=l;
        l=sum;
    }
}