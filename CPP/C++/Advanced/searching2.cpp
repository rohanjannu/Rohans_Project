#include<iostream>
using namespace std;


int binsearchrec(int arr[], int low, int high, int x)
{
    if(low>high)
        return -1;
    int mid = (low+high)/2;

    if(arr[mid]==x) return mid;
    if(arr[mid]>x)
    return binsearchrec(arr,low,mid-1,x);
    else
    return binsearchrec(arr,mid+1,high,x);
}

int main()
{
    int arr[]{10,20,25,30,40,50,60};
    int n = sizeof(arr)/sizeof(arr[0]);
    int num = 25;
    cout<<binsearchrec(arr,0,n-1,num);
return 0;
}