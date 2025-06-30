#include<bits/stdc++.h>
using namespace std;


int hoares(int arr[],int l,int h)
{
    int pivot= arr[l];
    int i=l-1,j=h+1;
    while(true)
    {
    do
    {
        i++;
    } while(arr[i]<pivot);
    do
    {
        j--;
    } while(arr[j]>pivot);
    if(i>=j)
    {
        return j;
    }
    swap(arr[i],arr[j]);
    }

}

int qsort(int arr[],int l,int h)
{
    if(l<h)
    {
        int p=hoares(arr,l,h);
        qsort(arr,l,p);  //in lomuto partition it is p-1 as p is fixed
        qsort(arr,p+1,h);
    }
}

int main()
{   
    int arr[] = {8,4,7,9,3,10,5};
    int n =sizeof(arr)/sizeof(arr[0]);
    int l=0; 
    int h=n-1;
    qsort(arr,l,h);
    for(int x:arr)
        cout<<x<<" ";
    return 0;
}