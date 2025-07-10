#include<iostream>
using namespace std;

int logarithm(int n)
{
    if(n==0)
    return 0;
    return 1+logarithm(n/2);
}
int tail_recur(int n,int k)
{
    if(n==0)
    return 0;
    cout<<k<<" ";
    tail_recur(n-1,k+1);
}
bool palindrome(string &str,int start,int end)
{
    if(start>=end)
        return true;
    return (str[start]==str[end]) && (palindrome(str,start+1,end-1));
}
int fibonacci(int n)
{
    if(n==0) return 0;
    if(n==1) return 1;
    return fibonacci(n-1)+fibonacci(n-2);
}
int main()
{
    int n=16;
    int k=16;
    string str="abcba";
    cout<<logarithm(n)<<endl;
    cout<<tail_recur(n,1)<<endl;
    cout<<palindrome(str,0,str.length()-1)<<endl;
    cout<<fibonacci(k)<<endl;
    return 0;
}