#include<iostream>
using namespace std;


int removeduplicates(int arr[],int n)
{
    int i,j,res=1;
    for(i=1;i<n;i++)
    {
        if(arr[i]!=arr[res-1])
        {
            arr[res]=arr[i];
            res++;
        }
    }
 return res;
}
 
int main()
{
    int arr[]{1,2,2,3,3,3,3,4,4,4,4,4,5,6,6};
    int n = sizeof(arr)/sizeof(arr[0]);
    int res=removeduplicates(arr,n);
    for(int i=0;i<res;i++)
    {
        cout<<arr[i];
    }
    return 0;
}