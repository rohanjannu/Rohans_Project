#include <bits/stdc++.h>
using namespace std;


int lomutopartition(int arr[],int l,int h)
{
    int p=arr[h];
    int i=l-1;
    for(int j=l;j<=h-1;j++)
    {
        if(arr[j]<p)
        {
            i++;
            swap(arr[i],arr[j]);
        }
    }
    swap(arr[i+1],arr[h]);
    return i+1;
}
int hoarepartition(int arr[],int l,int h)
{
    int key = arr[l];
    int i=l-1,j=h+1;
    while(i<j)
    {
        do
        {
            i++;
        } while (arr[i]<key);
        do
        {
            j--;
        } while (arr[j]>key);
        if(i>=j)
        return j;
        swap(arr[i],arr[j]); 
    }
   
}
int qsort(int arr[],int l,int h)  //Lomuto partition
{
    cout<<l<<" "<<h<<endl;    
    int p=0;
    if(l<h)
    int p=lomutopartition(arr,l,h);
    qsort(arr,l,p-1);
    qsort(arr,p+1,h);
    return 0;
}
/*
int qsort(int arr[],int l,int h)   //Hoare partition
{
    cout<<l<<" "<<h<<endl;    
    int p=0;
    if(l<h)
    int p=hoarepartition(arr,l,h);
    qsort(arr,l,p);
    qsort(arr,p+1,h);
    return 0;
}
*/
/*void qsort(int arr[],int l,int r)  //tail call eleminition
{ 
begin:
if(l<r)
{
int p=partition(arr,l,p);
l=p+1;
goto begin;
}
}*/

int main()
{
    int arr[]={10,20,40,20,30,60,70};
    int arr1[]{10,20,50};
    int arr2[]{5,50,50};
    int l=sizeof(arr)/sizeof(arr[0]);
    int a=0;
    qsort(arr,0,l-1);
for(auto x:arr)
cout<<x<<" ";
    return 0;
}