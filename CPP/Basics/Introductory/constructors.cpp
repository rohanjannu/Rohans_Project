#include<iostream>
using namespace std;

class rohan
{
    int a;
    public:  //constructors and destructors should always be public
    rohan()
    {
        cout<<"Default\n";
    }

    rohan(int s)
    {
        cout<<"Parameterised "<<s;
        a=s;
    }
};

int main()
{
    rohan a;
    rohan e(10);
    return 0;
}