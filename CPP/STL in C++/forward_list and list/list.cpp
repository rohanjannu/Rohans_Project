#include<bits/stdc++.h>
using namespace std;

int main()
{
    list<int> l;
    l.push_back(10);
    l.push_back(20);
    l.push_back(30);
    l.push_back(40);
    for(list<int>::iterator it=l.begin();it!=l.end();it++)
    cout<<*(it)<<" ";
    cout<<endl;
    list<int> l2 = {50,20,5,100};
    l.pop_front();
    auto it=l.insert(l.begin(),15);
    l.insert(it,2,7);
    for(list<int>::iterator it=l.begin();it!=l.end();it++)
    cout<<*(it)<<" ";
    cout<<endl;
    it=l.erase(it); // removes at that iterator
    l.remove(20);  //searches fopr that value and then remove it
    for(list<int>::iterator it=l.begin();it!=l.end();it++)
    cout<<*(it)<<" ";
    cout<<endl;
    for(list<int>::iterator it=l2.begin();it!=l2.end();it++)
    cout<<*(it)<<" ";
    cout<<endl;
    l.merge(l2);
    l.unique();
    cout<<endl;
    for(list<int>::iterator it=l.begin();it!=l.end();it++)
    cout<<*(it)<<" ";
    cout<<endl;
    l.reverse(); 
    return 0;
}