#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[] = {5,7,10,56,79,40};
    int n = sizeof(arr)/sizeof(arr[0]);
    int res=INT_MAX;
    sort(arr,arr+n);

    for(int i=1;i<n;i++)
    {
res=min(res,abs(arr[i]-arr[i-1]));
    }

    cout<<res<<endl;
}