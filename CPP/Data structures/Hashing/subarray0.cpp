#include<bits/stdc++.h>
using namespace std;


int longestzerosubarray(int *arr,int n)
{
    int presum=0,maxlen;
    unordered_map<int,int> w;
    for(int i=0;i<n;i++)
    {
        arr[i]=(arr[i]==0)?-1:1;
    }
    for(int i=0;i<n;i++)
    {
        presum+=arr[i];
        if(presum==0)
        {
            maxlen=i+1;
        }
        if(w.find(presum)!=w.end())
        {
            if(maxlen<i-w[presum+n])
            maxlen=i-w[presum];

        }
        else{
            w[presum+n]=i;
        }
    }
        return maxlen;
}
int main()
{
    int arr[]={1,0,1,0,0,0,1,1,1,0,1,0};
    int n=12;
    cout<<longestzerosubarray(arr,n);
    return 0;
}