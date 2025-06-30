#include<iostream>
#include<exception>
using namespace std;

class myexception : public exception
{
    public:
    virtual const char *what() const throw()
    {
        cout<<"Exception occured buddy, please resolve it \n";
    }
};

int main()
{
    try{
        throw myexception();
    }
    catch(myexception &e)
    {
        e.what();
    }
}