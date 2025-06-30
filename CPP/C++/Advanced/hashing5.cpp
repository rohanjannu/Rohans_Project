#include<iostream>
#include<unordered_map>
using namespace std;


void freqcount(int arr[],int n)
{
    unordered_map<int,int> q;
    for(int i=0;i<n;i++)
    {
        q[arr[i]]++;
    }
    for(auto x:q)
    cout<<x.first<<" "<<x.second<<endl;
}
int main()
{
    int arr[]{10,20,30,10,40,40,50};
    int n = sizeof(arr)/sizeof(arr[0]);
    freqcount(arr,n);
    return 0;
}

