#include<iostream>
using namespace std;

class harry
{
    public:
    int a;
    int b;

    harry(int c,int d): a(c),b(d){};

    harry operator + (harry &obj)
    {
        harry ret(0,0);
        ret.a=a+obj.a;
        ret.b=b+obj.b;
        return ret;
    }

};

int main()
{
    harry w(10,40),q(40,10);
    harry ret=w+q;
    cout<<ret.a<<" "<<ret.b;
    return 0;
}