#include<bits\stdc++.h>
using namespace std;


struct myhash
{
    int bucket;
    list <int> *table;

    myhash(int b)
    {
        bucket=b;
        table= new list<int>[bucket];
    }

    void insert(int a)
    {
        int i=a%bucket;
        table[i].push_back(a);
    }
    bool search(int a)
    {
        int i = a%bucket;
        for(auto x:table[i])
        {
            if(x==a)
            {
                return true;
            }
        }
        return false;
    }
    void remove(int a)
    {
        int i=a%bucket;
        table[i].remove(a);
    }
};

int main()
{
    myhash mh(7);
    mh.insert(40);
    mh.insert(56);
    mh.insert(67);
    mh.insert(20);
    mh.insert(12);
    cout<<mh.search(10)<<endl;
    cout<<mh.search(20)<<endl;
    mh.remove(20);
    cout<<mh.search(20)<<endl;
    return 0;
}