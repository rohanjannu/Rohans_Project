#include<iostream>
using namespace std;


int binsearch(int arr[], int n, int num)
{
    int low = 0;
    int high = n-1;
    while(low<=high)
    {
        int mid = (low+high)/2;
        if(arr[mid]==n)
        return mid;
        if(arr[mid]>n)
            high=mid-1; 
        else
          low=mid+1;
    }
    return -1;
}

int main()
{
    int arr[]{10,20,25,30,40,50,60};
    int n = sizeof(arr)/sizeof(arr[0]);
    int num = 25;
    cout<<binsearch(arr,n,num);
return 0;
}