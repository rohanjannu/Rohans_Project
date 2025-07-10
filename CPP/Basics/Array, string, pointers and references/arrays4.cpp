#include<iostream>
#include<vector>

using namespace std;

vector<int> &fun1(vector<int> &v)
{
    for(auto &x :v)
    {
        x=x*10;
    }
    return v;
}

int & fun2(int &a)
{
    a=a+1;
    return a;
}
int main()
{
    vector<int> v;
    int s=5;
    for(int i=0;i<10;i++)
    {
    v.push_back(i);
    }
    fun1(v);
for(auto x:v)
{
    cout<<x<<endl;
}
int a = fun2(s);
cout<<a<<endl;
}
