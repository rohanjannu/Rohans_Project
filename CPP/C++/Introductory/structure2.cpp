#include<iostream>
using namespace std;

union rohan
{
    int a;
    char b[4];
};

int main() 
{
    rohan r;
    r.a=511;
    cout<<r.b[0]<<" "<<r.b[1]<<" "<<r.b[2]<<" "<<r.b[3]<<" "<<endl;
    return 0;
}