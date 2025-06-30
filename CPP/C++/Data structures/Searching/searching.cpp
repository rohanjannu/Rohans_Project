#include<bits/stdc++.h>
using namespace std;


int bsearch(int *arr,int n,int x)
{
    int low=0,mid,high=n-1;

    while(low<=high)
    {
        mid=(low+high)/2;
        if(arr[mid]==x)
        {
            return mid;
        }
        else if(arr[mid]<x)
        {
            low = mid+1;

        }
        else{
            high=mid-1;
        }
    }
    return -1;

}
int main()
{
    int arr[] = {10,20,30,40,50,60};
    int n = 6,x=50;
    cout<<bsearch(arr,n,x);
    return 0;
}