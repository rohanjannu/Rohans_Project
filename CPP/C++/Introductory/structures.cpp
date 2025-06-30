#include<iostream>
using namespace std;
//typedef struct rohan
struct rohan
{
    int a;
    int b;
    string w;
};

int main()
{
    rohan p={5,5,"rohan"};  //instead of typing Struct rohan everywhere we use typedef
    cout<<p.a<<" "<<p.b<<" "<<p.w;
    return 0;
}