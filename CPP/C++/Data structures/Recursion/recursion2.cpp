#include<bits/stdc++.h>
using namespace std;


int log(int n)
{
    if(n==1)
        return 0;
else
    return 1+log(n/2);  //here 2 means the value is 2 at the base and n for base n
}

int dec_to_bin(int n)
{
    if(n==0)
        return 1;
    dec_to_bin(n/2);
    cout<<n%2<<" ";
}
int main()
{
    int a=15;
   // cout<<log(a);
    dec_to_bin(a);
    return 0;
}