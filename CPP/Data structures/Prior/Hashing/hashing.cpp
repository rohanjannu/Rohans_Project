#include<bits\stdc++.h>
using namespace std;

static int table[100]={0};
bool search(int a)
{
    if(table[a]==1)
        return true;
    else 
    {
        return false;
    }
}
bool insert(int a)
{
    table[a]=1;
    return true;
}
bool del(int a)
{
    table[a]=0;
    return true;
}

//Direct address table
int main()
{
    cout<<boolalpha;
    cout<<insert(10)<<endl;
    cout<<insert(20)<<endl;
    cout<<search(15)<<endl;
    cout<<search(10)<<endl;
    cout<<del(20)<<endl;
    cout<<search(20)<<endl;
    return 0;
}