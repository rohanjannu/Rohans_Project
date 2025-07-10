#include<bits/stdc++.h>
using namespace std;

bool booliszerosubarray(int arr[],int n)
{
    unordered_set<int> h;
    int i,presum=0;
    for(i=0;i<n;i++)
    {
        presum+=arr[i];
    if(h.find(presum)!=h.end())
        return true;
    if(presum==0)
        return true;
    h.insert(presum);
    }
    return false;
}

bool boolissumsubarray(int arr[],int n, int m)
{
    unordered_set<int> q;
    int i,presum=0;
    for(i=0;i<n;i++)
    {
        presum+=arr[i];
        if(presum==m)
            return true;
        if(q.find(presum-m)!=q.end())
            return true;
        q.insert(presum);
    }

    return false;
}

int longestsubarray(int arr[],int n,int k)
{
    unordered_map<int,int> m;
    int presum=0,res=0;
    for(int i=0;i<n;i++)
    {
        presum+=arr[i];
        if(presum==k)
            res= i+1;
        if(m.find(presum)==m.end())
            m.insert({presum,i});
        if(m.find(presum-k)!=m.end())
            res = max(res, i-m[presum-k]);
    }
return res;
}

int equalnozeros(int arr[],int n)
{
    unordered_map<int,int> q;
    int i,presum=0,res=0;
    for(i=0;i<n;i++)
    if(arr[i]==0)arr[i]=-1;
    for(i=0;i<n;i++)
    {
        presum+=arr[i];
        if(presum==0)
            res=i+1;
        
    if(q.find(presum)==q.end())
        q.insert({presum,i});
    if(q.find(presum)!=q.end())
        res=max(res,i-q[presum]);
        
        
    }
    return res;
}
int main()
{
    int arr[]{4,-3,2,1};
    int ar[]{5,8,6,13,3,-1};
    int arr1[]{8,3,1,5,-6,6,2,2};
    int arr2[]{1,0,1,1,1,0,0};
    int n=sizeof(arr)/sizeof(arr[0]);
    int m = 22;
    int q=4;
    cout<<booliszerosubarray(arr,n)<<endl;
    n=sizeof(ar)/sizeof(ar[0]);
    cout<<boolissumsubarray(ar,n,m)<<endl;
    int l=sizeof(arr1)/sizeof(arr1[0]);
    cout<<longestsubarray(arr1,l,q)<<endl;
    int z=sizeof(arr2)/sizeof(arr2[0]);
    cout<<equalnozeros(arr2,z)<<endl;
    return 0;
}