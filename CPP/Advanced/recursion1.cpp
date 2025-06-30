#include<iostream>
using namespace std;

void bin(int a)
{
    if(a==0)
    return;
 
    bin(a/2);
 cout<<a%2<<" ";

}
int main()
{
    int a=7;
    bin(a);
    return 0;
}