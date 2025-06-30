#include<iostream>
using namespace std;

void selectionsort(int arr[],int n)
{
    int temp[n];
    int i,j;
    for(i=0;i<n;i++)
    {
        int min_ind=0;
        for(j=1;j<n;j++)
            if(arr[j]<arr[min_ind])
            min_ind=j;
            temp[i]=arr[min_ind];
            arr[min_ind]=100000;
    }
    for(i=0;i<n-1;i++)
    {
        arr[i]=temp[i];
    }

}


int main()
{
    int arr[]{10,20,30,50,40,60};
    int n= sizeof(arr)/sizeof(arr[0]);
    selectionsort(arr,n);
    for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";
    return 0;
}
