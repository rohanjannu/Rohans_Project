#include<iostream>
using namespace std;


void lrra(int arr[],int n)
{
    int i;
    int temp = arr[0];
   for(i=1;i<n;i++)
   {
    arr[i-1]=arr[i];
   }
   arr[n-1]=temp;
}
int main()
{
    int arr[]{1,2,2,3,3,3,3,4,4,4,4,4,5,6,6};
    int n = sizeof(arr)/sizeof(arr[0]);
    lrra(arr,n);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i];
    }
    return 0;
}