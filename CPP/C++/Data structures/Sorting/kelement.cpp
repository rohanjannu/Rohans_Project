#include<iostream>
using namespace std;

int ipartition(int arr[],int l,int h)
{
    int i,j;
    i=l-1;
    int pivot = arr[h];
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
int kthSmallest(int arr[],int n,int k)
{
    int i,j,l=0,r=n-1;
    while(r>l)
    {
    int p = ipartition(arr,l,r);
    if(p==k-1)
    return p;
    if(p<k-1)
    {
        l= p+1;
    }
    else 
    {
        r=p-1;
    }
}
}
int main() {
	
    int arr[]={10,4,5,8,11,6,26};
	
	int n=sizeof(arr)/sizeof(arr[0]);int k=5;
	
	int index=kthSmallest(arr,n,k);
	
	cout<<arr[index];
	
}