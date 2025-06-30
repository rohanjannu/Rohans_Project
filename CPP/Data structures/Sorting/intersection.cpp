#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[] = {20,10,45,67,48,69,70};
    int brr[] = {10,20,20,20,20,40,67,67,200,104};
    
    int m = sizeof(arr)/sizeof(arr[0]);
    int n = sizeof(brr)/sizeof(brr[0]);

    sort(arr,arr+m);
 sort(brr,brr+n);

    int i=0,j=0;
    while(i<m && j<n)
    {
        if(i>0 && arr[i-1]==arr[i])
        {
         i++;
         continue;   
        }
        if(arr[i]<brr[j])
        {
            i++;
        }
        else if(arr[i]>brr[j])
        {
            j++;
        }
        else
        {
        cout<<arr[i]<<endl;
        i++;j++;
        }
    }
}