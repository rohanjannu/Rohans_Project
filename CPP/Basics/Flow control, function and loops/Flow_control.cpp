#include<iostream>
using namespace std;

int main()
{
    int a;
    cout<<"Enter the number\n";
    cin>>a;
    if(a>0)
    {
        if(a%2==0)  {
            cout<<"The number is positive and even\n";
        }
        else
        {
            cout<<"The number is positive and odd\n";
        }
    }
    else if(a<0)
    {
        if(a%2==0)
        {
            cout<<"The number is negative and even\n";
        }
        else
        {
            cout<<"The number is negative and odd\n";
        }
    }
    else
    {
        cout<<"The number is zero\n";
    }
    return 0;
}