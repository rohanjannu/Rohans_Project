#include<iostream>
using namespace std;

int largest(int arr[],int n)
{
    int i,res=0;

    for(i=0;i<n;i++)
    {
        if(arr[i]>=arr[res])
        {
        res=i;
        }
    }
    int q=arr[res];
    return q;
}
int main()
{
    int arr[]{10,20,1,50,90,1,2,3,4,5};
    int n=10;
    cout<<largest(arr,n);
    return 0;
}