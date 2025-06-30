#include<iostream>
using namespace std;
int main()
{
    int i,j,m=5,n=5;
    int **arr;
    for(i=0;i<m;i++)
     arr = new int*[m];  //array of pointers on heap 

     for(i=0;i<m;i++)
     {
        arr[i]= new int[n];
     }

     for(i=0;i<m;i++)
     {
        for(j=0;j<n;j++)
        {
            arr[i][j] = i*j;

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
}
