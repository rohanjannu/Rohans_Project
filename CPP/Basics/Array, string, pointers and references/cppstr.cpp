#include<iostream>
using namespace std;

int main()
{
string str = "gfg";
cout<<str.length()<<endl;
str = str +"xyz";
cout<<str<<endl;
cout<<str.substr(0,2)<<endl;
int res = str.find("fg");
if(res == string::npos)
{
    cout<<"not found"<<endl;
}
else
cout<<"Found at location ="<<res<<endl;
    

    for(int i=0;i<str.length();i++)
    {
        cout<<str[i]<<" ";
    }

    for(char x:str)
    {
        cout<<x<<endl;
    } 
    for(auto it = str.begin();it !=str.end();it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;
    return 0;
}