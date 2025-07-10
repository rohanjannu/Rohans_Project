#include<bits/stdc++.h>
using namespace std;

int main()
{
    unordered_set<int> s;
    s.insert(10);
    s.insert(5);
    s.insert(15);
    s.insert(20);
    for(auto x:s)
    cout<<x<<endl;
    cout<<s.size()<<endl;
    //s.clear();
    auto it = s.find(10);
    cout<<*(it)<<endl;
    //s.erase(10);
    //s.erase(it);
    return 0;
}