
#include<bits/stdc++.h>
using namespace std;

void bubblesort(int arr[],int n)
{
    for(int i=0;i<n;i++)
    { bool isswapped=false;
        for(int j=0;j<n-i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                swap(arr[j],arr[j+1]);
                isswapped=true;
            }
        }
        if(isswapped==false)
        break;
    }
}

bool selectionsort(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        int min_index =i;
        for(int j=i;j<n;j++)
        {
            if(arr[j]<arr[min_index])
                min_index=j;             
        }
        swap(arr[min_index],arr[i]);
    }

    return 0;
}

void insertionsort(int arr[],int n)
{
    int key;
    for(int i=1;i<n;i++)
    {
        key=arr[i];
        int j=i-1;
        while(j>=0 && arr[j]>key)
        {
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=key;
    }
}
int main()
{
    int arr[]{10,12,14,20,24,-20,-10,0,4000,100,45,90,10,90};
    int n=sizeof(arr)/sizeof(arr[0]);
    //bubblesort(arr,n);
    //selectionsort(arr,n);
    insertionsort(arr,n);
    for(auto x:arr)
        cout<<x<<" ";
    cout<<endl;
    return 0;
}