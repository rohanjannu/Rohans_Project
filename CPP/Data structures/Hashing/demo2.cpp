#include<bits\stdc++.h>
using namespace std;

struct myhash
{
    int bucket;
    list <int> *table;
    myhash(int a)
    {
        bucket=a;
        table=new list<int>[bucket];
    }
    bool insert(int a)
    {
        table[a%bucket].push_back(a);
        return true;
    }

    bool search(int a)
    {
        for (auto x:table[a%bucket])
        {
            if(x==a)
            {
                return true;
            }
        }
        return false;

    }
    
    bool remove(int a)
    {
        table[a%bucket].remove(a);
        return true;
    }
    
};

int main()
{
    myhash mh(10);
    cout<<boolalpha;
    cout<<mh.insert(40);
    cout<<"\n";
    cout<<mh.insert(34);
    cout<<"\n";
    cout<<mh.insert(220);
    cout<<"\n";
    cout<<mh.insert(46);
    cout<<"\n";
    cout<<mh.insert(42);
    cout<<"\n";
    cout<<mh.insert(34);
    cout<<"\n";
    cout<<mh.search(34);
    cout<<"\n";
    cout<<mh.search(36);
    cout<<"\n";
    cout<<mh.remove(40);
    cout<<"\n";
    cout<<mh.remove(22);
    cout<<"\n";
    cout<<mh.search(40);
    cout<<"\n";
    return 0;
}