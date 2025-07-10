#include<iostream>
using namespace std;
template<typename t>
class MyClass{
    t x,y;
public:
    MyClass(t a, t b)  {x=a;y=b;}
    t getfirst()  {
        return x;
    }
    t getsecond()  {
        return y;
    }
};

int main() {
    MyClass<int> obj(10, 20);
    cout << "First: " << obj.getfirst() << endl;    
    cout << "Second: " << obj.getsecond() << endl;
    MyClass<double> obj2(10.5, 20.5);
    cout << "First: " << obj2.getfirst() << endl;   
    cout << "Second: " << obj2.getsecond() << endl;
    return 0;
}


