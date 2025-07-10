#include<iostream>
using namespace std;


int seclar(int arr[],int n)
{
    int i,j,res=-1,largest=0;
    for(i=0;i<n;i++)
    {
        if(arr[i]>arr[largest])
        {
            largest=i;
            res=largest;
        }
        if(arr[i]!=arr[largest])
        {
            if(res==-1 || arr[i]>arr[res])
            {
                res=i;
            }
        }
    }
    return res;
}
int main()
{
    int arr[]{1,2,3,4,4,0};
    int ar[]{0,0,0,0,0,0,0,-1,1};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<arr[seclar(arr,n)];
}