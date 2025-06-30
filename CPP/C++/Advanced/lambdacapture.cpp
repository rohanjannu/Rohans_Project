#include<iostream>
using namespace std;

// we can use static keyword in order to keep it mutable by default
int main()
{
    int x=5,y=10;
    auto lambda_expr = [=](int a) mutable {x=x+a;y=y+a;};  //mutable keyword is important so that we not only have the access to access but also modify
    lambda_expr(5);
    cout<<x<<" "<<y<<endl;
    return 0;
}

