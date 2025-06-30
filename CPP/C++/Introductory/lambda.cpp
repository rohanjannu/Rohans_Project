#include<iostream>
#include<algorithm>
using namespace std;

int fun(int &&a,int &&b) //rvalue referencing
{
    return (a>=b)? a:b;
}

auto mycomp = [](int a, int b) {return abs(a)>abs(b);};
int main()
{
    int a=5,b=6;
    int arr[] {10,15,40,60,90};
    int n=5;
    cout<<"Welcome to my function buddy\n";
    cout<<fun(5,6);
    //sort(arr,arr+n,[](int a, int b){return abs(a)>abs(b);});
    sort(arr,arr+n,mycomp);
    for(auto x:arr)
        cout<<x<<endl;
    return 0;
}