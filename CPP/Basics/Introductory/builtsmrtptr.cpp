#include<iostream>
#include<memory>
using namespace std;

class Potter
{
    int x,y,z;
    public:
    Potter(int a=0,int b=0)
    {
        x=a;
        y=b;
        cout<<"Constructor created\n";
    }
    ~Potter()
    {
        cout<<"Destructor created\n";
    }
    void fun(int c)
    {
        z=c;
        cout<<"The passed value to the function is "<<z<<endl;
    }
};

int main()
{
    unique_ptr<Potter> ptr = make_unique<Potter>(10,20);
    shared_ptr<Potter> ptr1 = make_shared<Potter>(10,20);
    shared_ptr<Potter> point = ptr1;
    cout<<point.use_count()<<endl;
    cout<<ptr1.use_count()<<endl;
{
    weak_ptr<Potter> qw;
    qw=ptr1;
//    shared_ptr<Potter> po = lock(qw); //the lock() fucntion is used to convert weak pointer to shared pointer
cout<<qw.expired();
}

    return 0;

}
