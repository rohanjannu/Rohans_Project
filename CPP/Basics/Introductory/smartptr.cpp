#include<iostream>
using namespace std;


class smrt_ptr
{
    int *ptr;
    public:
    smrt_ptr(int *p = NULL){ptr=p;}
    ~smrt_ptr(){delete ptr;}

    int &operator*() {return *ptr;}
};

int main()
{
    smrt_ptr sp(new int());
    *sp=20;
    cout<<*sp;
    return 0;
}