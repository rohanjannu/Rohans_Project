#include<iostream>
#include<exception>
using namespace std;

class MyExceptions : public exception
{
    virtual const char* what() throw()
    {
        return "Exception occurred";
    }
};

int main()
{
    try{

    throw MyExceptions();
    }
    catch(exception &e)
    {
        cout<<e.what();
    }
    return 0;
}

