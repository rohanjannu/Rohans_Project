#include<iostream>
using namespace std;
    
class static_demo
{
    private:
    static int count;  //static members must be initialised here but defined outside the class
    public:
    static_demo()
    {
        count++;
    }
    ~static_demo()
    {
        count--;
    }
    static int getcount()  //static functions can only access static data members
    {
        return count;
    }
};

int static_demo::count = 0;
int main()
{
    static_demo a,b;
    cout<<static_demo::getcount();
    return 0;
}