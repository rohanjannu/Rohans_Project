#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    int a = 5;
    float b = 45.457632;
    double c = 45.65;
    cout<<boolalpha;
    cout<<a<<" ";
    cout<<noboolalpha;
    cout<<showbase;
    cout<<a<<" ";
    cout<<noshowbase;
    cout<<hex<<b<<" ";
    cout<<dec<<b<<" "<<endl;
    cout<<showpos;
    cout<<c<<" ";
    cout<<std::setprecision(5);
    cout<<c;
 //   cout<<std::setw(5);
 //   cout<<std::setfill('^"');
    cout<<left;
    cout<<c<<" ";
    cout<<fixed<<setprecision(6)<<" ";
    cout<<scientific<<setprecision(6)<<" ";
    cout<<showpoint;
    cout<<b<<endl;
}