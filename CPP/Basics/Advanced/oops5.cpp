#include<iostream>
using namespace std;


//Friend functions 
class nextq;
class base
{
    public:
    void printid(nextq &n);
};

class nextq
{
    private:
    int id;
    string name;
    public:
    nextq(int ID=0,string n=" "): id(ID),name(n){}
    friend void base::printid(nextq &n);

};

void base::printid(nextq &n)
{
    cout<<n.id<<" "<<n.name<<endl;
}
int main()
{
    base b;
    nextq n(5,"Rohan");
    b.printid(n);
    return 0;
}