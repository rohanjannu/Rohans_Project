#include<bits/stdc++.h>
using namespace std;


int longestpresum(int *arr,int n,int sum)
{
    unordered_map <int,int> w;
    int i,presum=0,res=0;

    for(i=0;i<n;i++)
    {
        presum+=arr[i];
        cout<<presum-sum<<endl;
        if(presum==sum)
        {
            res = i+1;
        }
        if(w.find(presum)==w.end())
        {
            w.insert({presum,i});
        }
        if(w.find(presum-sum)!=w.end())
        {
            res = max(res,i-w[presum-sum]);
        }

    }
    return res;
}

int main()
{
    int arr[] = {5,4,3,2,1,1,1,6,4,-2,0,-4,2,1,1,1,1,0};
    int n=19;
    int sum=5;
    cout<<"Longest presum present in the array is\n"<<longestpresum(arr,n,sum);
    return 0;
}