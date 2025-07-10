#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    double a=10;
    double b=5.7e+10;
    cout<<setprecision(6);
    cout<<showpoint;
    cout<<a<<" "<<b<<endl;
    cout<<noshowpoint;
    cout<<a<<" "<<b<<endl;
    cout<<fixed<<setprecision(2); //will get trailing zeroes
    cout<<a<<" "<<b<<endl;
    cout<<scientific<<setprecision(2); //will get exponential powers
    cout<<a<<" "<<b<<endl;
    cout<<defaultfloat;
    cout<<a<<" "<<b<<endl;
}