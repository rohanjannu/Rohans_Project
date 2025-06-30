#include<iostream>
using namespace std;


void reverse(int arr[],int n)
{
    int low = 0,high=n-1;
    int temp;
    while(low<high)
    {
        temp=arr[low];
        arr[low]=arr[high];
        arr[high]=temp;
    low++;
    high--;
    }
}

int main()
{
    int arr[]{1,2,3,4,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    reverse(arr,n);
    for(int x:arr){cout<<x<<" ";}
    return 0;
}