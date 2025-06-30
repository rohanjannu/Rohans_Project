#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
int merge(int arr[], int l, int m,int r)
{
    int n1 = m-l+1; int n2 = r-m;
    int i,j;
    int left[n1],right[n2];
    for(i=0;i<n1;i++)
    {
        left[i] = arr[l+i];
    }
    for(j=0;j<n2;j++)
    {
        right[j] = arr[m+1+j];
    }
    i=0,j=0;
    int k=l;
    while(i<n1 && j<n2)
    {
        if(left[i]<=right[j])
        {
            arr[k++]=left[i++];
        }
        else
        {
            arr[k++]=right[j++];
        }
    }
    while(i<n1)
    {
        arr[k++]=left[i++];
    }
    while(j<n2)
    {
        arr[k++]=right[j++];
    }
}

int mergesort(int arr[], int l,int r)
{
    if(r>l)
    {
    int m = (l+r)/2;
    mergesort(arr,l,m);
    mergesort(arr,m+1,r);
    merge(arr,l,m,r);
    }
}
int main()
{
    int arr[] = {10,2,66,23,12,67,50,24,67,45,66};
    int n = sizeof(arr)/sizeof(arr[0]);
    int l = 0;
    int r = n-1;
    mergesort(arr,l,r);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}