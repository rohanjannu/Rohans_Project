#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int i,j,m=4,n=5;
    vector<int> arr[m];  //array of vectors

    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        arr[i].push_back(10);
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