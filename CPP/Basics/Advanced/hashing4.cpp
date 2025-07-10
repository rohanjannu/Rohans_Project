#include<iostream>
#include<unordered_map>
using namespace std;

bool longsubarray(int arr[],int n,int sum)
{
    unordered_map<int,int> m;
    int presum=0,i,res=0;
    for(i=0;i<n;i++)
    {
        presum+=arr[i];
        if(presum==sum)
            res=i+1;
        if(m.find(presum)==m.end())
        {
            m.insert({presum,i});
        }
        if(m.find(presum-sum)!=m.end())
            res=max(res,i-m[presum-sum]);
    }
    return res;
}

int main()
{
    int arr[]{5,2,3};
    int n = sizeof(arr)/sizeof(arr[0]);
    int sum=5;
    cout<<longsubarray(arr,n,sum);
    return 0;
}
