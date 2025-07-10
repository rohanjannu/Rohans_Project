#include<iostream>
using namespace std;

void reverse(int arr[], int low,int high)
{
    if(low<high)
    {
        swap(arr[low],arr[high]);
        low++;
        high--;
    }
}
int leftrotate(int arr[],int n,int d)
{
    reverse(arr,0,d-1);
    reverse(arr,d,n-1);
    reverse(arr,0,n-1);
}
int main()
{
    int arr[]{1,2,3,4,5,6};
    int n = sizeof(arr)/sizeof(arr[0]);
    int d;
    cin>>d;
    leftrotate(arr,n,d);
    for(auto x:arr)
    {
        cout<<x<<" ";
    }
    cout<<endl;
}