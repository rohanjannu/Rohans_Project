#include<iostream>
using namespace std;

int recursion(int n)
{
    if(n==0)
        return 0;
    recursion(n-1);
    cout<<n<<" ";
    recursion(n-1);
}

int main()
{
    int i,n;
    recursion(3);
    return 0;
}