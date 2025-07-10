#include<iostream>
using namespace std;

int main()
{
    int arr[]={1,2,3,4,5};
    int *ptr=arr;
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<*(ptr+4)<<endl;
    return 0;
}