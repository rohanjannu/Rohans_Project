#include<iostream>
using namespace std;

class complex
{
    private:
    int real;
    int imag;

    public:
    complex(int r=0,int i=0) : real(r),imag(i){};  //initialiser list
    complex operator + (const complex &c)
    {
        complex res;  
        res.real = real+c.real;
        res.imag=imag+c.imag;
        return res;
    }
    void print()
    {
        cout<<"Result="<<real<<"+i"<<imag<<endl;
    }
};
int main()
{
    complex c1(2,5),c2(7,4);
    complex c3 = c1+c2;
    c3.print();
    return 0;
}