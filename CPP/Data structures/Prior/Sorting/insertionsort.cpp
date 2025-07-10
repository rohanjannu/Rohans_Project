#include<bits/stdc++.h>
using namespace std;

int insertionsort(int *arr,int n)
{
    int i,j,key;
    for(i=1;i<n;i++)
    {
        key=arr[i];
        j=i-1;
        while(j>=0 && arr[j]>key)
        {
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=key;
    }
}
int main()
{
    int arr[] = {10,25,40,12,10,9,50};
    int n = 7;
    insertionsort(arr,n);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" "<<endl;
    }
    return 0;
}