#include<iostream>
using namespace std;

int stringer1(const string a)
{
    string s = "Bye " + a;
    cout<<s<<endl;
}
int stringer(string &&a)
{
    string s = "Hi " + a;
    cout<<s<<endl;
    stringer1("Jannu");
}
int main()
{
    stringer("Rohan");
    return 0;
}