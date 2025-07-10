#include<iostream>
using namespace std;

class divideByZero
{};
class divideByNegative{};

void fun(int a,int b)
{
    try{
        if(b==0)
        throw divideByZero();
        if(b<0)
        throw divideByNegative();
        int c =a/b;
    }
    catch (divideByZero &e)
    {
        cout<<"division by zero exception"<<endl;
    }
    catch (divideByNegative &e)
    {
        cout<<"division by negative exception"<<endl;
    }
    catch(...)
    {
        cout<<"unknown exception"<<endl;
    }
    

}

int main()
{
    int a,b;
    cin>>a>>b;
    fun(a,b);
    return 0;
}