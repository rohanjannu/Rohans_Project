#include<iostream>
#include<unordered_set>
using namespace std;

bool zerosum(int arr[], int n)
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

}
int main()
{
    int arr[]{3,4,3,-1,1};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<zerosum(arr,n);
        return 0;
}