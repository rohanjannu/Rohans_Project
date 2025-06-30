#include<iostream>
using namespace std;
int main()
{
    int i,j,m=5,n=4,*arr[m]; //array of pointers on stack
    for(i=0;i<m;i++)
    {
        arr[i]= new int[n];
    }
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            arr[i][j]=i*j;

        }
    }
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            cout<<arr[i][j]<<" ";    
        }
        cout<<endl;
    }
    return 0;
}
