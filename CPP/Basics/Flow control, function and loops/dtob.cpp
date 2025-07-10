#include<iostream>
#include<vector>
using namespace std;
int main()
{
 int n,a=1,sum=0;
 cin>>n;
 vector<int> v;
 while(n>0)
 {
    int k=n%2;
    v.push_back(k);
    n=n/2;
 }
 for(int i=0;i<v.size();i++)
 {
    sum=sum+v[i]*a;
    a*=10;
 }
 cout<<sum<<endl;
    return 0;
}