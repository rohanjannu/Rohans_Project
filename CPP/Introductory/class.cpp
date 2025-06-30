#include<iostream>
struct rohan
{
    int a;
    int b;=======
};

int main()
{
    rohan e={10,10};
    rohan *ptr = &e;
    cout<<ptr->a<<" ";
    cout<<ptr->b;
    return 0;

}