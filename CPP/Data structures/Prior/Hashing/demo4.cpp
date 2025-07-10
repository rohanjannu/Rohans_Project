#include<bits/stdc++.h>
using namespace std;


int subarray(int *arr,int n)
{
    unordered_set <int> w;
    int presum=0;
    w.insert(0);
    for(int i=0;i<n;i++)
    {
        presum+=arr[i];
        if(w.find(presum)!=w.end())
        {
            return 1;
        }
        if(presum==0)
        return true;
        w.insert(presum);
    }


}
int main()
{
    int arr[] = {5, 3, 9, -4, -6, 7, -1};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<subarray(arr,n);
    return 0;
}