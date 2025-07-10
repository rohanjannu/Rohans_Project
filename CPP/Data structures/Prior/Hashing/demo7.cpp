#include<bits/stdc++.h>
using namespace std;

int countdistinct(int arr[],int n)
{      
    unordered_map <int,int> w;
    int i;
    for(i=0;i<n;i++)
    {
        w[arr[i]]++;
    }
    for(auto x: w)
    {
        cout<<x.first<<" "<<x.second<<endl;
    }
}
int main()
{
    int arr[]={10,20,30,40,50,60,60,40,20,10};
    int n=sizeof(arr)/sizeof(arr[0]);
    countdistinct(arr,n);
    return 0;
}