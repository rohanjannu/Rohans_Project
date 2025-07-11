#include<bits/stdc++.h>
using namespace std;


int mergesort(int arr[],int l,int m,int h)
{
    int n1 = m+1-l;
    int n2= h-m;
    int left[n1],right[n2];

    for(int i=0;i<n1;i++)
    {
        left[i]=arr[i+l];
    }
    for(int j=0;j<n2;j++)
    {
        right[j]=arr[m+1+j];
    }
    int i=0,j=0,k=l;
    while(i<n1 && j<n2)
    {
        if(left[i]<=right[j])
        {
            arr[k++]=left[i++];
        }
        else
        {
            arr[k++]=right[j++];
        }
    }
    while(i<n1)
    {
        arr[k++] = left[i++];
    }
    while(j<n2)
    {
        arr[k++] = right[j++];
    }
}
int main()
{
    int a[] = {10,25,20,40,8,11,15,22,25};
    int l=0,h=8,m=3;
    mergesort(a,l,m,h);
    for(int x:a)
        cout<<x<<" ";
    return 0;
}