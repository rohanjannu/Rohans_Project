#include<bits/stdc++.h>
using namespace std;

void heapify(int arr[],int n,int i)
{
    int j,left,right,largest;
    largest=i;
    left=2*i+1;
    right=2*i+2;
    if(left<n && arr[left]>arr[largest]) {largest = left;}

    if(right<n && arr[right]>arr[largest]) {largest = right;}

    if(largest!=i)
    {
        swap(arr[i],arr[largest]);
        heapify(arr,n,largest);
    }

}

void buildheap(int arr[],int n)
{
    int i;
    for(i=((n-2)/2);i>=0;i--)
    {
        heapify(arr,n,i);
    }

}
void heapsort(int arr[],int n)
{
    buildheap(arr,n);
    for(int i=n-1;i>0;i--)
    {
        swap(arr[0],arr[i]);
        heapify(arr,i,0);
    }
}
int main()
{
    int arr[]={12,11,13,5,6,7};
    int n = sizeof(arr)/sizeof(arr[0]);
    heapsort(arr,n);
    for(int x:arr)
        cout<<x<<" ";
    return 0;
}