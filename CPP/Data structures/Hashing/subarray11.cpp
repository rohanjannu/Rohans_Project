#include<bits/stdc++.h>
using namespace std;


bool subarray(int *arr,int n,int sum)
{
    int presum=0;
    unordered_set <int> w;

    for(int i=0;i<n;i++)
    {
       
        presum+=arr[i];
         if(presum==sum)
        {
            return true;
        }
        if(w.find(presum-sum)!=w.end())
        {
            return true;
        }
        w.insert(presum);
    }
    return false;
}

int main()
{
    int arr[] = {5,1,3,6,5,7,1,1,1,1,1,1};
    int n=12;
    int sum=7;
    cout<<boolalpha<<subarray(arr,n,sum);
    return 0;
}