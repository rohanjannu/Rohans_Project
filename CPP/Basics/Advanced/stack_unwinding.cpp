#include<iostream>
using namespace std;

void fun2() throw (string)
{
    cout<<"function begins"<<endl;
    throw string("Exception in fun");
    cout<<"function ends"<<endl;
}
void fun1()
{
    cout<<"Second starts"<<endl;
    fun2();
    cout<<"Second ends"<<endl;
}

void fun()
{
    cout<<"First starts"<<endl;
try{
fun1();
}
    catch(string &s)
    {
        cout<<"string is "<<s<<endl;
    }
    cout<<"First ends"<<endl;
}
int main()
{
    cout<<"main starts"<<endl;
       fun(); 
    cout<<"main ends"<<endl;
    return 0;
}