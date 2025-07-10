#include<iostream>
#include<exception>
using namespace std;


class MyException: public exception
{
    public:
    virtual const char* what() const throw() // Override what() method
    {
        return "MyException occurred"; 
    }
};

int main()
{
    try{
        cout<<"In main"<<endl;
        throw MyException();
    }
    catch (exception &e)
    {
        cout<<"Caught exception: "<<e.what()<<endl;
    }
    catch(...)
    {
        cout<<"Caught unknown exception"<<endl;
    }
}
