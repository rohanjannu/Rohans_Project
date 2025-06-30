#include<iostream>
using namespace std;

int fun1() throw (int)
{
    cout<<"In fun 1"<<endl;
    throw 100;
    cout<<"Fun 1 complete"<<endl;
}

int fun2() throw (int)
{
    cout<<"In fun 2"<<endl;
    fun1();
    cout<<"Fun 2 complete"<<endl;
}
int fun3() throw (int)
{
    cout<<"In fun 3"<<endl;
    try{
    fun2();
    }
    catch(int a)
    {
        cout<<"Exception handeled\n";
    }
    cout<<"Completing the function now\n";
}

int main()
{
    fun3();
    cout<<"In main at end\n";
    return 0;
}