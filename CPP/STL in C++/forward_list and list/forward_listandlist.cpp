#include<bits/stdc++.h>
using namespace std;



int main()
{
    forward_list<int> l;
    l.assign({10,20,30,40});
    l.remove(40); //removes all 40 in the list
    forward_list<int> l2;
    for(auto it = l.begin();it!=l.end();it++)
    {
        cout<<*(it)<<" ";
    }
    cout<<endl;
    l2.assign(l.begin(),l.end());   
    for(auto it = l2.begin();it!=l2.end();it++)
    {
        cout<<*(it)<<" ";
    }
    cout<<endl;
    forward_list<int> l6={15,20,30};
    forward_list<int>::iterator it = l.insert_after(l.begin(),10);
    l.insert_after(it,20);
    l.insert_after(it,{1,2,3,4,5});
    l.emplace_after(it,10);
    for(forward_list<int>::iterator it=l.begin();it!=l.end();it++)
    {
        cout<<*(it)<<" ";
    }
    l.erase_after(it);
    l.erase_after(it,l.end());// will delete all the values from it till l.end()
    l.reverse(); 
    return 0;
}

