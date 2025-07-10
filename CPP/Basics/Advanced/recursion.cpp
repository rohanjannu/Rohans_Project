#include<iostream>
using namespace std;


void  print(int a)
{
    if(a==0)
    return;
    print(a-1);
    cout<<a;
    print(a-1);
}
int main()
{
int n=3;
print(n);
    return 0;
}
