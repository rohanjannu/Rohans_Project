#include<iostream>
using namespace std;

int max(int a,int b)
{
    if(a>b) return a;
    else return b;
}

char max(char a,char b)
{
    if(a>b)return a;
    else return b;
}
int main()
{
    cout<<max('c','d');
    return 0;
}