#include<bits/stdc++.h>
using namespace std;


int getsurv(int n,int k)
{
    list<int> l;
    for(int i=0;i<n;i++)
    l.push_back(i);
    list<int>::iterator it=l.begin();
    while(l.size()>1)
    {
        for(int count=1;count<k;k++)
        {
            it++;
            if(it==l.end())
            it=l.begin();
        }
        l.erase(it);
         if(it==l.end())
            it=l.begin();
    }
    return *l.begin();
}
int main()
{
    int n=9;
    int k=3;
    cout<<getsurv(n,k);
    return 0;
}