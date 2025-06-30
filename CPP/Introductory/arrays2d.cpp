#include<iostream>
using namespace std;
int main()
{
    int a,b,i=5,j=5;
    int *arr = new int[i]; //array on heap
    for(j=0;j<i;j++)
    {
        arr[j]=i*j;
    }

     for(j=0;j<i;j++)
    {
        cout<<arr[j]<<" ";
    }
    cout<<endl;
}