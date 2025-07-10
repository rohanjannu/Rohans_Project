#include<iostream>
#include<memory>


using namespace std;

class rohan
{
    public:
    int x;
    rohan(int a):x(a)
    {
        
        cout<<"constructor called"<<endl;
    }
    ~rohan()
    {
        cout<<"destructor called"<<endl;
    }

};
int main()
{
    unique_ptr<rohan> p1 = make_unique<rohan>(10);
    //unique_ptr<rohan> p1(new rohan(10));//another way of creating a unique pointer
    //unique_ptr<rohan> p2 =p1; this is not allowed since in unique pointer a memory location can have only one ref count
    
    shared_ptr<rohan> p2 = make_shared<rohan>(20);
    
    unique_ptr<rohan> p3 = move(p1); // this is allowed since in unique pointer a memory location can have only one ref count
    shared_ptr<rohan> p4 = p2; // this is allowed since in shared pointer a memory location can have multiple ref count
    weak_ptr<rohan> p4;
    p4=p2;
    //cout<<p4.expired(); //to know if a pointer nis present or out of scope
    cout<<p2.use_count()<<" "<<p4.use_count()<<endl;
    shared_ptr<rohan> p5 = lock(p4);
}