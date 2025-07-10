#include<bits/stdc++.h>
using namespace std;


int lomuto(int arr[],int l,int p)
{
    int i,j;
    int pivot = arr[p-1];
i=l-1;
    for(j=l;j<p-1;j++)
    {
        if(arr[j]>=pivot)
        {
            i++;
            swap(arr[j],arr[i]);
        }
    }
    swap(arr[i+1],arr[p]);


return i+1;
}

int main()
{
    int arr[] = {20,56,20,56,10,80,70,5,15};
    int n = sizeof(arr)/sizeof(arr[0]);
    int pivot = 7;
    lomuto(arr,0,pivot);
    return 0;
}