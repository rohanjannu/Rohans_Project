#include<bits/stdc++.h>
using namespace std;

int factorial(int n,int k)
{
    if(n==0 || n==1)
    {
        return 1;
    }
    return factorial(n-1,k*n);
}

int main()
{
    int n=5,k=1;
    cout<<factorial(n,k); //tail recursion is a case where the last operation done by a function is a recursive function call. Hence not needing the compiler to store the state of the function and hence are faster than others.
    return 0;
}