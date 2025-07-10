#include<iostream>
using namespace std;

int main()
{
    int n,i=1,j;
    cout<<"Inverrted triangle pattern size\n";
    cin>>n;
    while(i<=n)
    {
        j=1;
        while(j<=n-i){
            cout<<" ";
            j++;
        }
        while(j<=n)
        {
            cout<<"*";
            j++;
        }
        cout<<"\n";
        i++;
    }

}
