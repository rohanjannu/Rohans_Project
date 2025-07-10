#include<iostream>
using namespace std;

struct rohan
{
    int x;
    int y;
};
int main()
{
    rohan r;
    r.x=10;
    r.y=20;

    rohan p = {10,20};

    //rohan w = {.y=20,.x=10};

    cout<<r.x<<r.y<<p.x<<p.y<<endl;

}