#include<bits/stdc++.h>
using namespace std;

bool issum(int arr[],int n, int sum)
{
    unordered_set<int> h;
    int presum=0;
    for(int i=0;i<n;i++)
    {
        presum+=arr[i];
        if(presum==sum)
        return true;

        if(h.find(presum-sum)!=h.end())
            return true;
         h.insert(presum);
    }
return false;
}
int main()
{
    int arr[] = {5,3,9,-4,-6,7,1};
    int n = sizeof(arr)/sizeof(arr[0]);
    int sum=22;
    cout<<issum(arr,n,sum);
    return 0;
}