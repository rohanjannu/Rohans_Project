#include<bits/stdc++.h>
#define mymax2(a,b) (((a)>(b))>(a):(b)) //Macro method of using templates
using namespace std;

template <typename T>
//template <typename T,typename U> //This is a template function
//template <typename T=double> //This is a template function with default type
T mymax(T a,T b)
{
    return (a>b)?a:b;
}

int main()
{
    vector<int> v = {1,2,3,4,5,6,7,8,9,10};

    vector<int> ::iterator it = v.begin();
    cout<<*it<<endl;
    it++;
    cout<<*it<<endl;
    it++;
    cout<<*it<<endl;
    it=next(it);
    cout<<*it<<endl;
    it=next(it,2);
    cout<<*it<<endl;
    it=prev(it);
    cout<<*it<<endl;
    it=prev(it,4);
    cout<<*it<<endl;
    advance(it,5);
    cout<<*it<<endl; 
    cout<<mymax<int>(5,9)<<endl;
    return 0;
}