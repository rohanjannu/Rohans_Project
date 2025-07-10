#include<bits/stdc++.h>
using namespace std;

int count_distinct(int arr[],int n)
{
    unordered_set<int> s;
    for(int i=0;i<n;i++)
    s.insert(arr[i]);
    return s.size();

    /*
    unordered_set<int> s(arr,arr+n);  //This is a more shorter way to implement the said function
    return s.size();*/
}

int freq_map(int arr[],int n)
{
    unordered_map<int,int> s;
    for(int i=0;i<n;i++)
    {
        s[arr[i]]++; //adds the value and increments the index by one 
    }
    for(auto e:s)
        cout<<e.first<<" "<<e.second<<endl;
}
int main()
{
    int arr[]{10,20,30,40,40,50,50,70,20};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<count_distinct(arr,n)<<endl;
    cout<<freq_map(arr,n)<<endl;
    return 0;
}

