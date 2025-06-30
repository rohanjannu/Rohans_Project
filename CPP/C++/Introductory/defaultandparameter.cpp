#include<iostream>
using namespace std;

class Test{
    public:
        Test(){cout << "Default\n"; }
        Test(int x){cout << "Parameterised\n"; }
};

class Main{
    Test t;
    public:
        Main(){
            t=Test(10);
        }
};

int main()
{
    Main m;
    return 0;
}