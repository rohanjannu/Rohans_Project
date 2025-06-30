#include<iostream>
using namespace std;

int selectionsort(int *arr,int n)
{
    int i,j,minind;
    for(i=0;i<n-1;i++)
    {
        minind=i;
        for(j=i+1;j<n;j++)
        {
            if(arr[j]<arr[minind])
            {
                
                minind=j;
            }
            swap(arr[j],arr[minind]);
        }
    }
return 0;
}

int main()
{
    int arr[]={10,20,56,28,90,10,11};
    int n=7;
    selectionsort(arr,n);
    for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";
    return 0;
}