#include<iostream>
using namespace std;


class smrt_ptr
{
    int *ptr;
    public:
    smrt_ptr(int *p = null){ptr=p;}
    ~smrt_ptr(){delete p;}

    int &operator*() {return *ptr;}
};

int main()
{
    smrt_ptr sp(new int());
    *sp=20;
    cout<<*sp;
    return 0;
}