#include<bits/stdc++.h>
using namespace std;

template <typename T>

struct pair1
{
    T x,y;
    pair1(T a,T b):x(a),y(b)
    {}
    T getfirst(){return x;}
    T getsecond(){return y;}
};

int main()
{
    pair1<int> p(5,10);
    cout<<p.getfirst();
    cout<<p.getsecond();
    return 0;
}