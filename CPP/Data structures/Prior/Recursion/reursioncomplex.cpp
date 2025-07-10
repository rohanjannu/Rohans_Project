#include<iostream>
#include<string>
using namespace std;


bool palindrome(string str, int a,int b)
{
    if(a>b)
     return true;
    return ((str[a]==str[b]) && palindrome(str,a+1,b-1));
}

int main()
{
    string str = "aabbaa";
    int first=0,last=5;
    if(palindrome(str,first,last))
        cout<<"Is a palindrome\n";
    else
        cout<<"Not a palindrome\n";
    return 0;
}