#include<bits/stdc++.h>
using namespace std;


int binsearch(int arr[],int low,int high,int x)
{
    int mid=(low+high)/2;
    if (low>high) return -1;
    if(arr[mid]==x)
    return mid;
    else if(arr[mid]<x)
    return binsearch(arr,mid+1,high,x);
    else
    return binsearch(arr,low,mid-1,x);
}

int main()
{
    int arr[] = {10,20,30,40,50,60};
    int low=0,high=6,x=50;
    cout<<binsearch(arr,low,high,x);
    return 0;
}