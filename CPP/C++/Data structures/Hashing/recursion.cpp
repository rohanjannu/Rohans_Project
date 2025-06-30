#include<iostream>
using namespace std;

int ropecutting(int n,int a,int b,int c)
{
    if(n==0)
    {
        return 0;
    }
    if(n<0)
    {
        return -1;
    }
    int res = max(ropecutting(n-a,a,b,c),max(ropecutting(n-b,a,b,c),ropecutting(n-c,a,b,c)));

    if(res==-1)
    return -1;

    return res+1;
}
//Rope cutting problem
int main()
{
    int a,b,c,n;
    cout<<"Enter the ropes of lengths allowed\n";
    cin>>a>>b>>c;
    cout<<"What is the length of the rope\n";
    cin>>n;
    cout<<ropecutting(n,a,b,c)<<endl;
}