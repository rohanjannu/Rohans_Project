#include<bits/stdc++.h>
using namespace std;


int main()
{
    unordered_map<string,int> um;
    um.insert({"Rohan",1});
    um["Jannu"]=2;
    for(auto x:um)
    cout<<x.first<<" "<<x.second<<endl;
    return 0;
}