#include<iostream>
using namespace std;


int print(int n)
{
    if(n==0)
    {
        return n;
    }
    cout<<n<<" ";
    print(n-1);
    cout<<n<<" ";
}

int main()
{
    int n=5;
    print(5);
    return 0;
}