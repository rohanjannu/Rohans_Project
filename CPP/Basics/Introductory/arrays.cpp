#include<iostream>
using namespace std;
int main()
{
    cout<<"Declaring arrays\n";
    int m=2,n=2,i,j;
    int arr[m][n]; //array on stack
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            arr[m][n]=i*j;
        }
    }
     for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            cout<<arr[m][n];
        }
    }
    return 0;
}