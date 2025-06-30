#include<iostream>
#include<algorithm>
using namespace std;


bool compare(int x,int y)
{
    return abs(x)<abs(y);
}
int main()
{
    int a[] = {-1, 2,5,9,-10};
    int n = sizeof(a)/sizeof(a[0]);
    sort(a,a+n,compare);
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}