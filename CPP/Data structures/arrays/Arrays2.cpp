#include<iostream>
using namespace std;

void leftrotate(int *arr,int n,int d)
{
    int i,temp[d];
    for(i=0;i<d;i++)
    {
        temp[i]=arr[i];
    }
    for(i=d;i<n;i++)
    {
        arr[i-d]=arr[i];
    }
    for(i=0;i<d;i++)
    {
        arr[n-d+i]=temp[i];
    }
    
}
int main()
{
    int d,n;
    int arr[]{1,2,3,4,5};
    cin>>n>>d;
    leftrotate(arr,n,d);
    for(auto x:arr)
    cout<<x<<endl;
    return 0;
}