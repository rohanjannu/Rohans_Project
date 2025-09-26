#include<bits/stdc++.h>
using namespace std;

void printklargest(int arr[],int n, int k)
{
    priority_queue<int, vector<int>,greater<int>> pq(arr,arr+k);
    for(int i=k;i<n;i++)
    {
        if(arr[i]>pq.top())
        {
            pq.pop();
            pq.push(arr[i]);
        }
    }
    while(pq.empty()==false)
    {
        cout<<pq.top()<<" ";
        pq.pop();
    }
}
int purchasemax(int arr[],int n,int &&sum)
{
    priority_queue<int,vector<int>,greater<int>> pq(arr,arr+n);
    int res=0;
    while(sum>=0 && pq.empty()==false && pq.top()<=sum)
    {
        sum=sum-pq.top();
        pq.pop();
        res++;
    }
    return res;
}
struct mycmp  //In priority queue constructor a structure or class is expected instead of a function
{
    bool operator()(pair<int,int>p1,pair <int,int>p2)
    {
        if(p1.second==p2.second)
            return p1.first>p2.first;
        return p1.second<p2.second;
    }
};
void printkfrequent(int arr[],int n,int k)
{
    unordered_map<int,int> m;
    for(int i=0;i<n;i++)
    {
        m[arr[i]]++;
    }
    priority_queue<pair<int,int>,vector<pair<int,int>>, mycmp> pq(m.begin(),m.end());
    for(int i=0;i<k;i++)
    {
        cout<<pq.top().first;
        pq.pop();
    }

}
void printkfrequent1(int arr[],int n,int k)
{
    unordered_map<int,int> m;
    for(int i=0;i<n;i++)
    {
        m[arr[i]]++;
    }
    vector<int> freq[n+1];
    for(auto x:m)
    {
        freq[x.second].push_back(x.first);
    }
    int count=0;
    for(int i=n;i>=0;i--)
    {
        for(int x:freq[i])
        {
            cout<<x<<" ";
            count++;
            if(count==k)
                return;
        }
    }
 }
int main()
{
    //priority_queue<int> pq;  //this is max heap by default
    priority_queue<int,vector<int>,greater<int>> pq;  //this is min heap //asceding order
    int arr[]{1,2,3,4,5,10,7,9,8,6};
    priority_queue<int> pq1(arr,arr+10); //this is better than individually calling the push function
    pq.push(10);
    pq.push(15);
    pq.push(5);
    cout<<pq.size()<<endl;
    cout<<pq.top()<<endl;
    while(pq.empty()==false)
    {
        cout<<pq.top()<<" ";
        pq.pop();
    }
    cout<<endl;
    while(pq1.empty()==false)
    {
        cout<<pq1.top()<<" ";
        pq1.pop();
    }
    cout<<endl;
    int n=10,k=3;
    cout<<endl;
    printklargest(arr,n,k);
    cout<<endl;
    cout<<purchasemax(arr,n,10);
    cout<<endl;
    printkfrequent(arr,n,k);
    printkfrequent1(arr,n,k);
    return 0;
}