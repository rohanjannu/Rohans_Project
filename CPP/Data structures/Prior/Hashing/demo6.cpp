#include<bits/stdc++.h>
using namespace std;


int freq(int *arr,int n)
{
    unordered_set <int> a;
   for(int i=0;i<n;i++)
   {
        a.insert(arr[i]);
   }
   return a.size();
}

int freq1(int *arr,int n)
{
    unordered_set <int> w(arr,arr+n);
    return s.size();
}

int main()
{
    int arr[]{5,10,15,15,20,25,25};
    cout<<freq(arr,7);
    return 0;
}
