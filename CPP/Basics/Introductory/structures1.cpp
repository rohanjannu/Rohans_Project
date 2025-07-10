#include<iostream>
using namespace std;

struct rohan
{
    char a;
    char b;
    string s;
}s1 __attribute__((packed));

struct rohan1
{
    char a;
    string s;
    char b;
}s2 __attribute__((packed));

int main()
{
    cout<<sizeof(s1);
    cout<<sizeof(s2);
    return 0;
}