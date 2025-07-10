#include<bits/stdc++.h>
using namespace std;

template <typename T,typename T1,int limit>

T1 mynums(T a,T b,int n)
{
    if(b>limit)
        return 0;
    return (a>b)?a:b;
}
int main()
{
    const int limit=100;
    cout<<mynums<int,char,limit>(5,99,limit);
    return 0;
}