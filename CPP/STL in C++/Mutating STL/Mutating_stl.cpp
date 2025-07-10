#include<bits/stdc++.h>
#include<algorithm>
using namespace std;

struct point
{
    int x;
    int y;
};

bool mycmp(point a,point b)
{
    return (a.x>b.x);
}
bool mycmp1(pair<int,int> p1,pair<int,int> p2)
{
    double d1=p1.first/p1.second;
    double d2=p2.first/p2.second;
    return d1>d2;
}
double fknaps(int w, pair<int,int> p[],int n)
{
    sort(p,p+n,mycmp1);
    double res=0.0;
    for(int i=0;i<n;i++)
    {
        if(p[i].second<=w)
        {
            res+=p[i].first;
            w=w-p[i].second;
        }
        else{
            res+=p[i].first*(double)w/p[i].second;
            break;
        }
    }
return res;
}

int mindiff(int arr[],int n, int m)
{
    if(m>n) return -1;
    sort(arr,arr+n);
    int res=arr[m-1]-arr[0];
    for(int i=1;i+m-1<n;i++)
    {
        res=min(res,(arr[i+m-1]-arr[i]));
    }
    return res;
}
void merge(int a[],int b[],int &&m, int &&n)
{
    for(int i=0;i<m;i++)
    {
        if(a[i]>b[0])
        {
            pop_heap(b,b+n,greater<int>());
            swap(a[i],b[n-1]);
            push_heap(b,b+n,greater<int>());
        }
    }
}
int main()
{
    vector<int> v;
    v={10,20,5,7};
    sort(v.begin(),v.end());
    for(auto x:v)
    {
        cout<<x<<" ";  
    }
    cout<<endl;
    int srr[]={5,2,9,6,54,100};
    sort(srr,srr+6,greater<int>()); //reverses the sort order
    point arr[]= {{5,4},{0,0},{6,9},{1,0}};
    cout<<sizeof(arr)<<" "<<sizeof(arr[0])<<endl;
    int n=sizeof(arr)/sizeof(arr[0]);
    sort(arr,arr+4,mycmp);
    for(auto i:arr)
    {
        cout<<i.x<<" "<<i.y<<endl;
    }

    pair<int,int> arrq[4]= {{60,10},{100,20},{120,30},{1,10}};
    int w=50;
    int arrw[]={7,3,2,4,9,12,56};
    int q = sizeof(arrw)/sizeof(arrw[0]);
    int m =3;
    cout<<fknaps(w,arrq,n)<<endl;
    cout<<mindiff(arrw,q,m)<<endl;

    int arrf[]={15,6,7,12,30};
    int j=sizeof(arrf)/sizeof(arrf[0]);
    cout<<"Heap"<<endl;
    make_heap(arrf,arrf+j,greater<int>());
    cout<<arrf[0]<<endl;
    pop_heap(arrf,arrf+j,greater<int>());
    cout<<arrf[0]<<endl;
    push_heap(arrf,arrf+j,greater<int>());
    cout<<arrf[0]<<endl;
    sort_heap(arrf,arrf+j,greater<int>());//sorts the given heap
    for(auto x:arrf)
    cout<<x<<" ";
    cout<<endl;
    int a[]={3,20,40};
    int b[]={2,10,12};
    merge(a,b,3,3);
    for(auto x:a)
    cout<<x<<" ";
    cout<<endl;
    for(auto x:b)
    cout<<x<<" ";
    cout<<endl;

    vector<int> v20 = {5,10,15,20};
    vector<int> v22 = {40,45,50,55,60};
    vector<int> v24(9);
    merge(v20.begin(),v20.end(),v22.begin(),v22.end(),v24.begin());
    for(auto x:v24)
    cout<<x<<" ";
    cout<<endl;

    next_permutation(v20.begin(),v20.end());
     for(auto x:v20)
    cout<<x<<" ";
    cout<<endl;

    reverse(v22.begin(),v22.end());
     for(auto x:v22)
    cout<<x<<" ";
    cout<<endl;

    prev_permutation(v22.begin(),v22.end());
     for(auto x:v22)
    cout<<x<<" ";
    cout<<endl;
    return 0;
}