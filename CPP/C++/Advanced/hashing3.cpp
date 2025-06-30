#include<iostream>
#include<unordered_set>
using namespace std;


bool sumarray(int arr[],int n, int sum)
{
    unordered_set<int> h;
    int presum=0,i;
    for(i=0;i<n;i++)
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
    int arr[]{5,3,2,-1};
    int n=sizeof(arr)/sizeof(arr[0]);
    int sum =5;
    cout<<sumarray(arr,n,sum);
    return 0;
}