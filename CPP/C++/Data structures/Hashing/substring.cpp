#include<bits/stdc++.h>
using namespace std;

void substr(string str,string curr,int index)
{
    if(index==str.length())
    {
        cout<<curr<<" ";
        return;
    }
    substr(str,curr,index+1);
    substr(str,curr+str[index],index+1);
} 

int main()
{
    string a="ABC";
    substr(a,"",0);
    return 0;
}