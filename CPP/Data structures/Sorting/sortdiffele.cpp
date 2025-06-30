#include<bits/stdc++.h>
using namespace std;


void sort(int arr[],int n)
{
    int l=0,mid=0,h = n-1;

    while(mid<h)
    {
        if(arr[mid]==0)
        {
            swap(arr[mid],arr[l]);
            l++;mid++;
        }
        if(arr[mid]==1)
        {
            mid++;
        }
        else
        {
            swap(arr[mid],arr[h]);
            h--;
        }

    }
}
int main()
{
    int arr[] = {0,1,1,2,0,1,1,2};
    int n =sizeof(arr)/sizeof(arr[0]);
    sort(arr,n);
    for(int x:arr)
    cout<<x<<" ";
    return 0;
}