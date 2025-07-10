#include<iostream>
using namespace std;

class complex
{
    public:
    int real;
    int imag;
public:
    complex(int r=0,int i=0):real(r),imag(i)
    {}

    complex operator +(complex(&c))
    {
        complex res;
        res.real = real+c.real;
        res.imag=imag+c.imag;
        return res;
    }

};

int main()
{
    complex c1(5,10),c2(5,10);
    complex c3=c1+c2;
    cout<<c3.real<<"+i"<<c3.imag<<endl;
    return 0;
}