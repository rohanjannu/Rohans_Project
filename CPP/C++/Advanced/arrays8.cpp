#include<iostream>
using namespace std;


void zeroes(int arr[], int n)
{
    int i,count=0;
    for(i=0;i<n;i++)
    {
        if(arr[i]!=0)
        {
            swap(arr[i],arr[count]);
            count++;
        }
    }
}

int main()
{
    int arr[]{0,0,0,0,0,2,5,9,5,0,2,1};
    int n = sizeof(arr)/sizeof(arr[0]);
    zeroes(arr,n);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i];
    }
    return 0;
}