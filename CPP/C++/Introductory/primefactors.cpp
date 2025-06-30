#include<iostream>  //prime factorisation
using namespace std;

bool prime(int a)
{
    for(int i=2;i<a;i++)
    {
        if(a%i==0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int n=232;
    for(int i=2;i<=n;i++)
    {
    if(prime(i))
    {
        int x=i;
        while(n%x==0)
        {
            cout<<i<<" ";
            x=x*i;
        }
    }
    }

}