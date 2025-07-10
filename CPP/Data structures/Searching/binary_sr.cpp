#include<iostream>
using namespace std;

int binary_search(int arr[],int low,int high,int x)
{
    int mid =(low+high)/2;
    if(arr[mid]==x)
    return mid;
    if(arr[mid]>x)
    binary_search(arr,low,mid-1,x);
    else 
    binary_search(arr,mid+1,high,x);
}
int main()
{
    int arr[]{1,2,3,4,5,6,7,8,9,0};
    int n=sizeof(arr)/sizeof(arr[0]);
    int x =4;
    cout<<binary_search(arr,0,n-1,x);
    return 0;
}