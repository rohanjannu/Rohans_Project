#include<iostream>
using namespace std;

//open addressing

struct myhash
{
    int cap,size=0;
    int *arr;
myhash(int a)
{
    cap=a;
arr=new int[cap];
for(int i=0;i<cap;i++)
arr[i]=-1;

}
int hash(int val)
{
    return val%cap;
}
bool insert(int val)
{
    if(size==cap)
        return false;

    int i=hash(val);

    while(arr[i]!=-1 && arr[i]!=-2 && arr[i]!=val)
            i=(i+1)%cap;
    if(arr[i]==val)
        return false;
    else 
    {
        arr[i]=val;
        size++;
    return true;
    }
}

bool search(int val)
{
    int h= hash(val);
    int i=h;
    
    while(arr[i]!=-1)
    {
        if(arr[i]==val)
        {
            return true;
        }
        i=(i+1)%cap;
        if(i==h)
        {
            return false;
        }
    }
    return false;
}
bool remove(int val)
{
    int i=hash(val);
    int h=i;
    while(arr[i]!=-1)
    {
        if(arr[i]==val)
        {
            arr[i]=-2;
            return true;
        }
        i=(i+1)%cap;
        if(i==h)
        {
            return false;
        }
    }
    return false;
}
};


int main()
{
    myhash mh(20);
    cout<<boolalpha;
    cout<<mh.insert(10)<<endl;
    cout<<mh.insert(20)<<endl;
    cout<<mh.insert(25)<<endl;
    cout<<mh.insert(30)<<endl;

/*for(int i=0;i<20;i++)
{
    cout<<"i = " <<i<<" value = " <<mh.arr[i]<<endl;
}*/
    cout<<mh.search(10)<<endl;
    cout<<mh.search(15)<<endl;
    cout<<mh.search(33)<<endl;
    cout<<mh.search(20)<<endl;

    cout<<mh.remove(19)<<endl;
    cout<<mh.remove(10)<<endl;
    cout<<mh.search(10)<<endl;
    cout<<mh.search(20)<<endl;

    return 0;
}