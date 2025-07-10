#include<bits/stdc++.h>
using namespace std;


int merge_sort(int arr1[],int arr2[],int m,int n)
{
    int i=0,j=0;
    while(i<m && j<n)
    {
        if(arr1[i]<arr2[j])
        {
            cout<<arr1[i++]<<" ";
        }
        else{
            cout<<arr2[j++]<<" ";
        }
    }
        while(i<m)
            cout<<arr1[i++]<<" ";
        while(j<n)
            cout<<arr2[j++]<<" ";
    

    return 0;
}

int merge_sortdac(int arr[],int low,int mid,int high)
{
    int n1=mid-low+1;
    int n2=high-mid;
    int left[n1],right[n2];
    for(int i=0;i<n1;i++)
    left[i]=arr[low+i];
    for(int i=0;i<n2;i++)
    right[i]=arr[mid+i+1];

    int i=0,j=0,k=low;
    while(i<n1 && j<n2)
    {
        if(left[i]<=right[j])
        {
            arr[k]=left[i];
            i++;
            k++;
        }
        else
        {
            arr[k]=right[j];
            k++;
            j++;
        }
    }
    while(i<n1)
    {
        arr[k]=left[i];i++;k++;
    }
    while(j<n2)
    {
        arr[k]=right[j];j++;k++;
    }

}

int mergerec(int arr[],int l,int r)
{
    if(r>l)
    {
        int m=(r+l)/2;
        mergerec(arr,l,m);
        mergerec(arr,m+1,r);
        merge_sortdac(arr,l,m,r);
    }
}
void naivepartition(int arr[],int l,int h,int p)
{
    int temp[h-l+1],index=0;
    for(int i=0;i<h;i++)
    {
        if(arr[i]<p)
        {
            temp[index++]=arr[i];
        }}
        temp[index++]=arr[p];
        for(int i=0;i<h;i++)
        {
        if(arr[i]>p)
        {
            temp[index++]=arr[i];
        }
    
}
for(int i=l;i<h;i++)
arr[i]=temp[i-l];
}

int lomutopartition(int arr[],int l,int h)
{
    int i=0;
    int pivot=arr[h];
     int q=l-1;
     for(int j=l;j<h-1;j++)
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
int hoarespartition(int arr[],int l,int h)
{
    int pivot=arr[l];
    int i=l-1,j=h+1;
    while(true)
    {
        do
        {
            i++;
        } while (arr[i]<pivot);
        do
        {
            j--;
        } while (arr[i]>pivot);
        if(i>=j) return j;
        swap(arr[i],arr[j]);
    }
}
int kthsmallest(int arr[],int n,int k)
{
int l=0,r=n-1;
while(l<=r)
{
    int p = lomutopartition(arr,l,r);
    if(p==k-1)
    return p;
    else if(p>k-1)
    r=p-1;
    else 
    l=p+1;
}
return -1;
}
int main()
{
    int arr[]={10,20,40,20,30,60,70};
    int arr1[]{10,20,50};
    int arr2[]{5,50,50};
    int arx[]{10,4,5,8,11,6,26};
    int k=5;
    int m=3,n=3;
    //merge_sort(arr1,arr2,m,n);
    int l=sizeof(arr)/sizeof(arr[0]);
    int o=sizeof(arx)/sizeof(arx[0]);
    //merge_sortdac(arr,0,l/2,l);
    //mergerec(arr,0,l);

int p=4;
//naivepartition(arr,0,l,p);
//cout<<lomutopartition(arr,0,l);
//cout<<hoarespartition(arr,0,l);
int index=kthsmallest(arr,o,k);
cout<<arx[index];
//for(auto x:arr)
//cout<<x<<" ";
    return 0;
}