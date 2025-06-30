#include<iostream>
using namespace std;

class SP
{
    public:
    int *ptr;
    SP(int *p= nullptr){ptr=p;}
    ~SP(){delete ptr;}
    int& operator *(){return *ptr;}
};

int main()
{
    int a,b;
    SP sp(new int(20));
  //  *sp=20;
    cout<<*sp<<endl;
    return 0;
}