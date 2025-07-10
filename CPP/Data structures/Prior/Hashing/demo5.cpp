#include<bits/stdc++.h>
using namespace std;

int sumsubarray(int *arr,int n,int sum)
{
    unordered_set <int> w;
    int presum=0;
    w.insert(0);
    for(int i=0;i<n;i++)
    {
        presum+=arr[i];
        if(presum == sum)
        {return true;
        }
        if(w.find(presum-sum)!=w.end())
            return true;
        w.insert(presum);
    }
}

int main()
{

    int arr[] = {5, 8, 6, 13, 3, -1};
    int sum = 22;
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<sumsubarray(arr,n,sum);
    return 0;
}