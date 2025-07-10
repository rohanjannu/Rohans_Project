#include<iostream>
#include<typeinfo>
#include<iomanip>
using namespace std;

int main()
{
    auto a =10;
    cout<<"You can do this Rohan!!"<<endl;
    cout<<sizeof(long int);
    cout<<typeid(a).name()<<endl;
    int b=15,c=2;
    double d = static_cast<double>(b)/c;
    cout<<d<<endl;
    cout<<"Enter your name buddy!"<<" \n";
    string str;
    //getline(cin,str);
    cout<<"Wlcome to \"Geeks for Geeks\" "<<str<<endl;
    int e=25;
    bool f=true;
    cout<<boolalpha;
    cout<<noboolalpha;
    cout<<f<<endl;
    cout<<hex;
    cout<<e<<endl;
    cout<<oct;
    cout<<e<<endl;
    cout<<hex;
    cout<<e<<endl;
    cout<<showbase;
    cout<<e<<endl;
    cout<<showpos;
    cout<<e<<endl;
    cout<<uppercase;
    cout<<e<<endl;
    cout<<showbase;
    cout<<e<<endl;
    cout<<noshowbase;
    cout<<noshowpos;
    cout<<nouppercase;
    cout<<setw(10);
    cout<<setfill('*');
    cout<<left;
    cout<<e<<endl;
    cout<<setw(10);
    cout<<setfill('*');
    cout<<right;
    cout<<e<<endl;
    return 0;
    
}