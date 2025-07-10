#include<iostream>
using namespace std;

void subsets(string s, string curr="", int i=0)
{
    if(i==s.length())
    {
        cout<<curr<<" ";
        return ;
    }
    subsets(s,curr,i+1);
    subsets(s,curr+s[i],i+1);
}

int main()
{
    string str="abc";
    subsets(str,"",0);
    return 0;
}