#include<iostream>
using namespace std;

typedef struct rohan
{
    int a;
    string b;
}p;

int main()
{
    r w={.b="Harry"};  //might not work in cpp for designated initialisers
    cout<<r.a,r.b;
    return 0;
}