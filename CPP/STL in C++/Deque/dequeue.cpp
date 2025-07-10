#include<bits/stdc++.h>
using namespace std;

void printmax(int arr[],int n,int k)
{
deque<int> dq;
for(int i=0;i<k;i++)
{
    while(!dq.empty() && arr[i]>=arr[dq.back()])
        dq.pop_back();
dq.push_back(i);  //first
}
for(int i=k;i<n;i++)
{
    cout<<arr[dq.front()]<<" ";
    while(!dq.empty() && dq.front()<=i-k)  //this condition removes the elements that are iun the queue that are out of range k //basically checks if the dequeue is full
    dq.pop_front();
    while(!dq.empty() && arr[i]>=arr[dq.back()])  //this checks for smaller elements
    dq.pop_back();
    dq.push_back(i);  //remaining
}
cout<<arr[dq.front()]<<" "; //last
}
int main()
{
    deque<int> dq = {10,20,30};
    dq.push_front(5);
    dq.push_back(50);
    for(auto x:dq)
    {
        cout<<x<<" ";
    }
    cout<<endl;
    cout<<dq.front()<<" "<<dq.back()<<" ";
    auto it = dq.begin();
    it++;
    dq.insert(it,20);
    dq.pop_front();
    dq.pop_back();
    cout<<dq.size();
    int arr[]={20,30,40,10,60};
    int n= sizeof(arr)/sizeof(arr[0]);
    int k=3;
    cout<<"\nPrintmax"<<endl;
    printmax(arr,n,k);
    return 0;
}