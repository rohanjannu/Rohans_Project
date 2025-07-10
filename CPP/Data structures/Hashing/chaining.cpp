#include<bits/stdc++.h>
using namespace std;

struct MyHash
{
    int BUCKET;
    list <int> *table;
    MyHash(int b)
    {
        BUCKET =b;
        table = new list<int>[BUCKET];
    }
    void insert(int a)
    {
        int i = a%BUCKET;
        table[i].push_back(a);
    }
    void remove(int a)
    {
        int i = a%BUCKET;
        table[i].remove(a);
    }
    bool search(int a)
    {
        int i = a%BUCKET;
        for(auto x:table[i])
        if(x==a)
        return true;
        return false;
    }

};

int main()
{
    int b = 7;
    MyHash mh(10);
    mh.insert(5);
    mh.insert(6);
    mh.insert(10);
    mh.insert(500);
    cout<<mh.search(10);
    mh.remove(10);
    cout<<mh.search(10);
    return 0;
}