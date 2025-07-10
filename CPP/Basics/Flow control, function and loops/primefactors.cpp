#include<iostream>
using namespace std;
int isprime(int n)
{
    for(int i=2;i<n;i++)
    {
        if(n%i==0)
        {
            return 0;
        }
    }
        return 1;
    }
int primefactors(int a)
{
    int i;
    for(i=2;i<=a;i++)
    {   
        if(isprime(i))
        {    int x=i;
        {
            while(a%x==0)
            {
                cout<<i<<" "<<endl;
                x=x*i;
            }
        }
    }
    }
}

int main()
{
    int a;
    cout<<"Enter the number to find the prime factors\n";
    cin>>a;
    primefactors(a);
    return 0;
}