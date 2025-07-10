#include<bits/stdc++.h>
using namespace std;

int main()
{
    multimap<int,int> mm;
    mm.insert({5,10});
    mm.insert({15,20});
    mm.insert({15,20});
    mm.insert({5,10});
    for(auto x:mm)
    cout<<x.first<<" "<<x.second<<endl;
    cout<<mm.count(10)<<endl;
    //mm.erase(10);
    cout<<mm.count(10)<<endl;
     for(auto x:mm)
    cout<<x.first<<" "<<x.second<<endl;
    auto it=mm.upper_bound(10);
    cout<<(*it).first<<endl;
    auto it1=mm.lower_bound(10);
    cout<<(*it1).first<<endl;
     auto it2=mm.equal_range(5);
    for(auto itr=it2.first;itr!=it2.second;itr++)
    cout<<(*itr).first<<" "<<(*itr).second<<endl;
    return 0;
}