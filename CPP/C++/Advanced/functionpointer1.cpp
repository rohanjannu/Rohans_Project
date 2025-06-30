#include<iostream>
#include<algorithm>
using namespace std;

int sum(int a,int b)
{
    return a+b;
}
int mul(int a,int b)
{
    return a*b;
}
int func(int a,int b,int (*func_ptr)(int a,int b))
{
    return func_ptr(a,b);
}
int compare(int a,int b){return (abs(a)>abs(b));} // this can be used only for ascending and descending i guess
int main()
{
    int a=5,b=5;
    cout<<func(a,b,sum)<<endl;
    cout<<func(a,b,mul)<<endl;

    int arr[] = {2,-1,0,4,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    sort(arr,arr+n,compare);
    for(auto x:arr)cout<<x<<endl;
    return 0;

}
