#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int a[]={10,15,5};
    char b[]={'X','Y','Z'};

    pair<int, char> p[3];
    for(int i=0; i<3; i++)
    {
        p[i]= {a[i],b[i]};
    }
    sort(p,p+3);
    for(   int i=0; i<3; i++)
    {
        cout << "First: " << p[i].first << endl;    
        cout << "Second: " << p[i].second << endl;
    }


}