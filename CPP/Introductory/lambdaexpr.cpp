#include<iostream>
using namespace std;


int main()
{
    int x=10,y=20; //use static to use all the variables easily
    auto lambda_expr = [&](int a)
    {
        x+=a;
        y+=a;
    };
    auto lambda_expr1 = [=](int a)mutable
    {
        x+=a;
        y+=a;
    };
    lambda_expr(5);
    cout<<x<<" "<<y<<endl;
    lambda_expr1(10);
    cout<<x<<" "<<y<<endl;
    return 0;
}
