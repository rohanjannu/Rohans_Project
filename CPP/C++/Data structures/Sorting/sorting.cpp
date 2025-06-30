#include<bits/stdc++.h>
using namespace std;


void bubblesort(int arr[],int n)
{
    int i,j;
    bool swapped;
    for(i=0;i<n;i++)
    {
        swapped=false;
        for(j=0;j<n-i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                swap(arr[j],arr[j+1]);
            }
            swapped=true;
        }
        if(swapped == false)
        break;
    }
}

int main()
{
    int arr[] = {5,10,20,50,22,56,29,100};
    int n = sizeof(arr)/sizeof(arr[0]);
    bubblesort(arr,n);
    cout<<"After sorting the array is ";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}