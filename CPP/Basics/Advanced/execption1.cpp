#include<iostream>
using namespace std;


void fun() throw (string)
{
    cout<<"function";
}
int main() 
{
    int a,b;
    double c;
    double d;
    cin>>a>>b;
    cin>>c>>d;
    try{
        if(b==0)
        throw 0;
        if(c==5)
        throw string("rohan");
        if(c==6)
        throw 's';
        if(d=1.1)
        throw 1.5;
        cout<<"result "<<a/b;
    }
    catch(int a)
    {
        cout<<"division by zero";
    }
    catch(string &s)
    {
        cout<<"string exception "<<s;
    }
    
    catch(double d)
    {
        cout<<"unknown exception"<<d;
    }
    catch(...)
    {
        cout<<"unknown exception";
    }
    return 0;
} 

