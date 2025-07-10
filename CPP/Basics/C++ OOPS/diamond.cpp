#include<iostream>
using namespace std;    

class A
{
    public:
    int x;
};

class B : virtual public A{};
class C : virtual public A{};


class D :public B,public C
{

};

int main()
{   
    D a;
    cout<<a.x<<endl; // Error: Ambiguous access to x
}