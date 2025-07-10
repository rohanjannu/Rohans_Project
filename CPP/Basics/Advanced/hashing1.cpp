#include<iostream>
using namespace std;


struct myhash
{
int *arr,i;
int cap,size;
myhash(int num)
{
cap=num;
size=0;
for(i=0;i<num;i++)
{
    arr[i]=-1;
    cout<<arr[i];
}
}
int hash(int k)
{
    return k%cap;
}
bool search(int k)
{
    int h = hash(k);
    int i=h;
    while(arr[i]!=-1)
    {
        if(arr[i]==k)
        return true;
        i=(i+1)%cap;
        if(i==h)
            return false;
    }
    return false;
}
bool insert(int k)
{
    if(size==cap)
    return false;
    int i= hash(k);
    while(arr[i]!=-1 && arr[i]!=-2 && arr[i]!=k)
    {
        i=(i+1)%k;
    }
    if(arr[i]==k)
    return true;
    else
    {
        arr[i]=k;
        size++;
        return true;
    }
    return false;

}
bool erase(int k)
{
    int i = hash(k);
    int h=i;
    while(arr[i]!=-1)
    {
        if(arr[i]==k)
        {
        arr[i]=-2;
        return true;
        }
        i=(i+1)%cap;
        if(i==h)
        return false;
    }

}
};


int main()
{
    myhash mh(10);
    cout<<mh.insert(10);
    cout<<mh.search(10);
  //  cout<<mh.erase(10);
    return 0;
}