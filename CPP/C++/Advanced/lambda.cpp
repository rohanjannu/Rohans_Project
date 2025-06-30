#include<iostream>
#include<algorithm>
using namespace std;
//capture list 
int main()
{
    int arr[] = {4,7,-2,5,0,1};
    int n=sizeof(arr)/sizeof(arr[0]);
    sort(arr,arr+n,[](int a,int b){return a>b;});  //just like inline function with no function name
    for(auto x:arr)cout<<x<<endl;
    return 0;
}