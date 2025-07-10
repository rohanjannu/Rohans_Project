#include<iostream>
using namespace std;

typedef struct rohan
{
    int a;
    string b;
}r;

int main()
{
    r w; // Use default initialization
    w.b = "Harry";
    cout<<w.a<<w.b;
    return 0;
}