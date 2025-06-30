#include<bits/stdc++.h>
using namespace std;

struct myhash
{
    int index;
    list<int> *table;

    myhash(int a)
    {
        index = a;
        table = new list<int> [index];
    }

    void insert(int a)
    {
        int i = a%index;
        table[i].push_back(a);
    }

    bool search(int a)
    {
        int i = a%index;
        for(auto x:table[i])
        {
            if(x==a) return true;
        }
        return false;
    }
    void deletem(int a)
    {
        int i =a%index;
        table[i].remove(a);
    }
    
};
int main()
{
    myhash mh(7);
    mh.insert(10);
    mh.insert(20);
    mh.insert(15);
    mh.insert(7);
    cout<<mh.search(20)<<endl;
    mh.deletem(20);
    cout<<mh.search(20)<<endl;
    return 0;
}