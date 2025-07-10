#include<iostream>
using namespace std;

int findnum(int arr[], int n,int num)
{
    int i;
    for(i=0;i<n;i++)
    {
        if(arr[i]==num)
        return num;
    }
    return 0;
}
int main()
{
    int arr[]{1,2,3,4,5},num=0;
    int n=sizeof(arr)/sizeof(arr[0]);
    cin>>num;
    findnum(arr,n,num)?cout<<"Found":cout<<"Not Found"<<endl;
    return 0;
}
