#include<bits/stdc++.h>
using namespace std;

void reverse(string &&s)
{
    stack<char> stack;
    for(int i=0;i!=s.length();i++)
    {
        stack.push(s[i]);
    }
    for(int i=0;i!=s.length();i++)
    {
       cout<<stack.top()<<endl;
        stack.pop();
    }
}
bool ismatching(char a,char b)
{
    if((a=='[' && b==']') || (a=='{' && b=='}') || (a=='(' && b==')')) 
    return true;
    else 
    return false;
}
bool isbalanced(string &&str)
{
    stack<char> stack;
    for(int i=0;i<str.length();i++)
    {
        if(str[i]=='{' || str[i]=='[' || str[i]=='(')
        {
            stack.push(str[i]);
        }
        else{
            if(stack.empty()==true)
            return false;
            else if((ismatching(stack.top(),str[i]))==false)
                 return false;
            else
            stack.pop();
        }
    }
    return (stack.empty()==true);
}
void stockspan(int arr[],int &&n)
{
    stack<int> s;
    for(int i=0;i<n;i++)
    {
        while(s.empty() == false && arr[s.top()]<=arr[i])
        s.pop();
        int span = (s.empty())? (i+1):(i-s.top());
        cout<<span<<endl;
        s.push(i);
    }
}
void printpreviousgreater(int arr[],int &&n)
{
    stack<int> s;
    s.push(arr[0]);
    cout<<"-1"<<endl;
    for(int i=1;i<n;i++)
    {
        while(s.empty()==false && s.top()<=arr[i])
        s.pop();
        int span=(s.empty()?-1:s.top());
        cout<<span<<endl;
        s.push(arr[i]);
    }

}
vector<int> printnextgreater(int arr[],int &&n)
{
     stack<int> s;
     vector<int> v;
     s.push(arr[n-1]);
     cout<<"-1"<<endl;
     for(int i=n-2;i>=0;i--)
     {
     while(s.empty()==false && s.top()<=arr[i])
     s.pop();
     int next=(s.empty()?-1:s.top());
     v.push_back(next);
     s.push(arr[i]);
     }
     reverse(v.begin(),v.end());
     return v;
}
     

int main()
{
    stack<int> s;
    int arr[]{15,13,12,14,16,8,6,4,10,30};
    int arr1[]{20,30,10,5,15};
    int arr2[]{5,15,10,8,6,12,9,18,20};
    s.push(10);
    s.push(20);
    s.push(30);
    while(s.empty()==false)
    {
        cout<<s.top()<<endl;
        s.pop();
    }
    reverse("Rohan");
    cout<<isbalanced("{[[()]]}")<<endl;
    stockspan(arr,10);
    printpreviousgreater(arr1,5);
    cout<<endl<<endl;
    vector<int> v = printnextgreater(arr2,9);
    for(auto x:v)
    cout<<x<<endl;
    return 0;
}