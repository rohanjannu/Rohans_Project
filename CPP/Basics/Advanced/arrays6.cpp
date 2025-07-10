#include<iostream>
using namespace std;

void lrra(int arr[], int n, int d)
{
    int i,j;
    int temp[d];
    for(i=0;i<d;i++)
    {
        temp[i]=arr[i];
    }
    for(i=d;i<n;i++)
    {
        arr[i-d]=arr[i];
    }
    for(i=0;i<d;i++)
    {
        arr[n-d+i]=temp[i];
    }

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