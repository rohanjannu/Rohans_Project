#include<bits/stdc++.h>
using namespace std;

int main()
{
    multiset<int> ms;  //In multiset even the duplicates are stored in a sorted manner 
    ms.insert(10);
    ms.insert(20);
    ms.insert(30);
    ms.insert(40);
    ms.insert(20);
    ms.insert(30);
    ms.insert(40);
    ms.insert(10);
    ms.erase(10); //Will remove all the instances of the key
    for(auto x:ms)
    cout<<x<<endl;
    cout<<ms.count(20)<<endl;
    auto it=ms.lower_bound(30);
    cout<<*(it)<<endl;
    it=ms.upper_bound(30);
    cout<<*(it)<<endl;
    auto it1=ms.equal_range(20);
    cout<<*(it1).first<<" "<<*(it1).second<<endl;
    return 0;
}