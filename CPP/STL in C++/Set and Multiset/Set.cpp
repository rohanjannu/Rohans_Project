#include<bits/stdc++.h>
using namespace std;
set<int> s1;
int getceiling(int x)
{
    auto it=s1.lower_bound(x);
    if(it==s1.end())
    return INT_MAX;
    else
    return *(it);

}

int getfloor(int x)
{
    auto it = s1.lower_bound(x);
    if(it==s1.begin())
    {
        if(*it==x)
    {
        return *it;
    }
    else return INT_MIN;
    }
    else if(it!=s1.end() && *it==x)
    {
        return *it;
    }
    it--;
    return *it;
}
void printceilingright(int arr[],int n)
{
    set<int> s;
    int res[n];
    for(int i=n-1;i>=0;i--)
    {
        auto it=s.lower_bound(arr[i]);
        if(it==s.end())
        {
            res[i]=-1;
        }
        else{
            res[i]=*it;
        }
        s.insert(arr[i]);
    }
    for(int i=0;i<n;i++)
    cout<<res[i]<<endl;
}
int main()
{
    set<int> s;
    int arr2[]{100,50,30,60,55,32};
    //set<int,greater<int>> s; //for decreasing order
    s.insert(10);
    s.insert(5);
    s.insert(20);
    s.insert(20);
    s.erase(5);
 //   auto it=s.find(5);
 //   s.erase(it);
 //   s.erase(it,s.end()); // removes all emenet after 5 and including 5
    for(int x:s)
    cout<<x<<endl;
   auto it1 =  s.find(20);
    if(it1==s.end())
    {
       cout<<"Not Found\n";
    }
    else cout<<"Found\n";
    s.clear();
    cout<<s.size()<<endl;
    s1={5,10,24,1,56,100,45};
    auto it2 = s1.lower_bound(19);
    if(it2!=s1.end())
    cout<<*(it2)<<" ";
    else
    cout<<"Given Element is greater than the largest\n";
    auto it3 = s1.upper_bound(19);
    if(it3!=s1.end())
    cout<<*(it3)<<" ";
    else
    cout<<"Given Element is greater than the largest\n";
    cout<<endl;
    cout<<getfloor(40)<<endl;
    cout<<getceiling(45)<<endl;
    cout<<endl;
    printceilingright(arr2,6);
    return 0;
}