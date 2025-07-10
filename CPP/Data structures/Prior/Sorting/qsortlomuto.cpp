#include<bits/stdc++.h>
using namespace std;

int lomuto(int arr[], int l, int h)
{
    int i,j;
    int pivot = arr[h];
    i=l-1;
    for(j=l;j<h;j++)
    {
        if(arr[j]<pivot)
        {
            i++;
        swap(arr[i],arr[j]);
        }
    }
    swap(arr[i+1],arr[h]);
    return i+1;
}

void qsort(int arr[], int l,int h)
{
    if(l<h)
    {
        int p = lomuto(arr,l,h);
        qsort(arr,l,p-1);
        qsort(arr,p+1,h);
    }
}



int main()
{
    int arr[] = {8,4,7,9,3,10,5};
    int n =sizeof(arr)/sizeof(arr[0]);  // no of elements is displayed here
    int l =0;
    int h=n-1;
    qsort(arr,l,h);
    for(auto x:arr)
        cout<<x<<" ";
    return 0;
}