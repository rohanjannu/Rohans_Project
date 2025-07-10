#include<iostream>
using namespace std;

struct myhash
{
    int *arr;
    int cap;
    int size =0;
    myhash(int b)
    {
        cap=b;
        arr=new int[b];
        for(int i=0;i<cap;i++)
        {
            arr[i]=-1;
        }
       
}
   bool insert(int n)
   {
    if(size==cap)
        return false;
    int i=n%cap;
    while(arr[i]!=-1 && arr[i]!=-2 && arr[i]!=n)
        i=(i+1)%cap;
    if(arr[i]==n)
        return false;
    else
    {
        arr[i]=n;
        size++;
        return true;
    }

   }
   bool remove(int n)
   {
     int i=n%cap;
     int h=i;
     while(arr[i]!=-1)
     {
        if(arr[i]==n)
        {
        arr[i]=-2;
            return true;
        }
        i=(i+1)%cap;
        if(i==h)
            return false;
    }
    }

   bool search(int n)
   {
    int i = n%cap;
    int h=i;
    while (arr[i]!=-1)
    {
        if(arr[i]==n)
        return true;
        i=(i+1)%cap;
        if(i==h)
        return false;
    }
    return false;

   }

};

int main()
{
    myhash mh(10);
    cout<<"Insert :"<<endl;
    cout<<mh.insert(5)<<endl;
    cout<<mh.insert(6)<<endl;
    cout<<mh.insert(10)<<endl;
    cout<<mh.insert(500)<<endl;
    cout<<"Search :"<<endl;
    cout<<mh.search(10)<<endl;
    cout<<"Remove :"<<endl;
    cout<<mh.remove(10)<<endl;
    cout<<mh.search(10)<<endl;
    return 0;
}