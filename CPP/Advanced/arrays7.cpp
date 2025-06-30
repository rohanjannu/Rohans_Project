#include<iostream>
using namespace std;

int reverse(int arr[], int low,int high)
{
    while(low<high)
    {
        swap(arr[low],arr[high]);
        low++;
        high--;
    }
}
void lrra(int arr[],int n,int d)
{
    reverse(arr,0,d-1);
    reverse(arr,d,n-1);
    reverse(arr,0,n-1);
}
int main()
{
    int arr[]{1,2,2,3,3,3,3,4,4,4,4,4,5,6,6};
    int n = sizeof(arr)/sizeof(arr[0]);
    int d =2;
    lrra(arr,n,d);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i];
    }
    return 0;
}