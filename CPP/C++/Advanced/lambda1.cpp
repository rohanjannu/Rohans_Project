#include<iostream>
#include<algorithm>
using namespace std;
//another method to use lambda expressions 
//[] - this is called capture list
int main()
{
    int arr[] = {4,7,-2,5,0,1};
    int n=sizeof(arr)/sizeof(arr[0]);
    auto mycomp = [](int a,int b){return a>b;};
    sort(arr,arr+n,mycomp);
    for(auto x:arr)cout<<x<<endl;
    return 0;
}