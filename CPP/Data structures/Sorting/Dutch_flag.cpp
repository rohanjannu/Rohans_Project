#include<bits/stdc++.h>
using namespace std;
void dutch_flag(int arr[],int n)
{
    int low=0,mid=0,hi=n-1,i=0;
    while(hi>=mid)
    {
        if(arr[mid]==0)
        {
            swap(arr[mid],arr[low]);
            low++;
            mid++;
        }
        if(arr[mid]==1)
        {
            mid++;
        }
        else{
            swap(arr[mid],arr[hi]);
            hi--;
        }
    }
    
}
int main()
{
    int arr[]={0,1,2,1,1,2};
    int n=sizeof(arr)/sizeof(arr[0]);
    dutch_flag(arr,n);
    for(auto x:arr)
        cout<<x<<" ";
    return 0;
}