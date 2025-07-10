#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n=4,x=10;
    vector <int> v(n,x); // size and value both initialised here
    for(vector<int>::iterator it=v.begin();it!=v.end();it++)
    cout<<*it<<" ";
    //for(vector<int>::iterator it=v.rbegin();it!=v.rend();it++)  //rbegin() and rend() are reverse iterator
    //cout<<*it<<" ";
    int arr[]={10,5,20,40};
    n=4;
    vector<int> v0(arr,arr+n); //will copy the asrrays to the vector
    v.pop_back();
    cout<<v.front()<<endl;
    v.front()=100;
    cout<<v.front()<<endl;
    cout<<v.back()<<endl;
    v.insert(v.begin(),100);
    v.insert(v.begin()+2,100);
    v.insert(v.begin(),2,400); // will insert 400 2 times at the beginning
    vector<int> v2;
    v2.insert(v2.begin(),v.begin(),v.begin()+2);
    for(auto x:v)
    cout<<x<<" ";
    cout<<endl;
    for(auto x:v2)
    cout<<x<<" ";
    v.erase(v.begin());
    v.erase(v.begin(),v.end()-1);
    v.clear(); //removes all the elements in the vector, if you call v.empty==true then you will get the true as output
    v.resize(5); // to channge the size, if the size os made smaller the rest of the elements will get deleted
    v.resize(9); // the extra space will be occupied with 0
    v.resize(15,100); // the extra space will take 100 as the values
    cout<<v2.capacity()<<endl;
    cout<<endl;
    return 0;
}