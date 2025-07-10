#include<iostream>
using namespace std;

class rohan
{
    int x;
    int y;
    
public:
static int count;
    void print()
    {
        cout<<x<<y<<endl;
    }
    rohan()
    {
        x=0;
        y=0;
        count++;
    }
    rohan(int a,int b):y(b)
    {
        x=a;
        count++;
    }
    void set(int x,int y)
    {
        this->x=x;
        this->y=y;
    }
    ~rohan()
    {
        cout<<"Destructor called"<<endl;
        count--;
    }
    static int getcount()
    {return count;}
};

int rohan ::count=0; // static data member initialization(mandatory)
int main()
{
    rohan r1;
    rohan r2(1,2);
    r1.print();
    r2.print();
    cout<<"count = "<<rohan::getcount()<<endl;
    rohan r3(r2);
    cout<<"count = "<<rohan::getcount()<<endl;
    r2.set(5,6);
    r2.print();
    r2.set(10,14);
    r3.print();
    rohan *ptr=new rohan(5,10);
    cout<<"count = "<<rohan::getcount()<<endl;
    ptr->print();
    cout<<endl;
    cout<<"count = "<<rohan::getcount()<<endl;
    return 0;
}