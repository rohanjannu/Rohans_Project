#include<bits/stdc++.h>
using namespace std;

int main()
{
    map<int,int> m;
    m={{1,5},{6,10}};
    m[3]=15;
    m.insert({4,50});
    cout<<m[5];
    for(auto &x:m)
    {
        cout<<x.first<<" "<<x.second<<endl;
    }
    cout<<m.size()<<endl;
   // m.at(41)=60;  //throws out of bound exception if the key is not present or not decalred earlier and will terminate the program

    for(map<int,int>::iterator it=m.begin();it!=m.end();it++)
    {
        cout<<(*it).first<<" "<<(*it).second<<endl;
    }
    if(m.find(5)==m.end())
    cout<<"Not found"<<endl;
    else cout<<"Found"<<endl;
    cout<<m.count(2)<<endl;
    auto it = m.lower_bound(4);
    cout<<(*it).first<<endl;
    auto it1 = m.upper_bound(4);
    cout<<(*it1).first<<endl;
    return 0;
}