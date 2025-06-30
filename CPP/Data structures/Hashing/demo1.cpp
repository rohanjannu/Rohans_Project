#include<iostream>
using namespace std;
struct myhash
{
    int *arr,size,cap;

myhash(int cap)
{
    this->cap=cap;
    arr= new int[cap];

}
int insert(int a)
{
    arr[a]=1;
}

int search(int a)
{
        if(arr[a]==1)
        return 1;
        else 
        return 0;
    }
    int del(int a)
{
arr[a]=0;
}
};


int main()
{
    myhash mh(20);
    cout<<boolalpha;
    mh.insert(10);
    mh.insert(20);
    cout<<mh.search(10)<<endl;
    mh.search(5);
    mh.del(10);
    cout<<mh.search(10)<<endl;
    return 0;
}