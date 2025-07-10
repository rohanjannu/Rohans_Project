#include<iostream>
using namespace std;
int main()
{
   int **arr,i,j;
   int m=2,n=4;
   arr = new int*[m];
   for(i=0;i<m;i++)
   {
        arr[i]=new int[n];

        for(i=0;i<m;i++)
        {
            for(j=0;j<n;j++)
            {
                cout<<arr[i][j];
    
            }
            cout<<endl;
        }
}
   return 0;
}