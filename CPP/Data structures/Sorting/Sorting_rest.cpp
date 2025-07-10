#include<bits/stdc++.h>
using namespace std;


int getmindiff(int arr[],int n)
{
    int min=INT_MAX;
    sort(arr,arr+n);
    for(int i=1;i<n;i++)
    {
        min=(min,arr[i-1]-arr[i]);
    }
}

void intersection(int arr[],int brr[],int m,int n)
{
    int i=0,j=0;
    while(i<m && j<n)
    {
        if(i>0 && arr[i]==arr[i-1]){i++;continue;}
        if(arr[i]<brr[j]){i++;}
        if(arr[i]>brr[j]){j++;}
        else{cout<<arr[i]<<" ";i++;j++;}
    }
cout<<endl;
}
void unions(int arr[],int brr[],int m,int n)
{
    int i=0,j=0;
    while(i<m && j<n)
    {
        if(i>0 && arr[i]==arr[i-1]){i++;continue;}
        if(j>0 && brr[j]==brr[j-1]){j++;continue;}
        if(arr[i]<brr[j]){{cout<<arr[i]<<" ";i++;}}
        if(arr[i]>brr[j]){{cout<<brr[j]<<" ";j++;}}
        else{cout<<arr[i]<<" ";i++;j++;}
    } 
        while(i<m)
        if(i>0 && arr[i]!=arr[i-1]){cout<<arr[i]<<" ";i++;}
        while(j<n)
        if(j>0 && brr[j]!=brr[j-1]){cout<<brr[j]<<" ";j++;}
       
        
    
cout<<endl;
}


int main()
{
    int arr[]{10,8,1,4};
    int arrr[]={10,20,20,40,60};
    int brrr[]={2,20,20,20};
    int n=sizeof(arr)/sizeof(arr[0]);
    int p=sizeof(arrr)/sizeof(arrr[0]);
    int q=sizeof(brrr)/sizeof(brrr[0]);
    cout<<getmindiff(arr,n)<<endl;
    intersection(arrr,brrr,p,q);
    unions(arrr,brrr,p,q);
    return 0; 
}