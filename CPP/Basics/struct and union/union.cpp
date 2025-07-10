#include<iostream>
using namespace std;

struct Node
{
    int data;
    union {
        struct{
            Node *left,*right;
        };
        struct{
            Node *prev,*next;
        };
    };
    
};
union rohan
{
    int x;
    int y;
    char z[4];
};

int main()
{
    rohan r;
    r.x=10;
    cout<<r.x<<" "<<r.y<<endl;
    r.y=20;
    cout<<r.x<<" "<<r.y<<endl;
    r.x=512;
    cout<<(int)r.z[0]<<(int)r.z[1]<<(int)r.z[2]<<(int)r.z[3]<<(int)r.z[4]<<endl;
    return 0;
}