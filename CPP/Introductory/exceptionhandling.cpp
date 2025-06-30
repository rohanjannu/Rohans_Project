#include<iostream> //only one exception can be captured in one function or program
using namespace std;

int num() throw (string)
{
    throw string("String\n");
    return 0;

}

int main()
{
    int y=0,z=9;
    try
    {
        if(z==0)
         throw 0;
        if(z==1)
        throw string("The number is zero\n");
        num();
    }
    catch (int a)
    {
        cout<<a;
    }
    catch (string &a)
    {
        cout<<a<<endl;
    }
    catch(...)
    {
        cout<<"Capturing all other exceptions"<<endl;
    }
    return 0;
}