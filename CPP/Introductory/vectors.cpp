#include<iostream>
#include<vector>          //vector of vectors
using namespace std;
int main()
{
    int m=3,n=2,i,j;
    vector<vector<int>> arr;

    for(i=0;i<m;i++)
    {
        vector<int> v;
    for(j=0;j<n;j++)
    {
        v.push_back(10);
    }
    arr.push_back(v);
    }

    for(i=0;i<arr.size();i++)
    {
        for(j=0;j<arr[i].size();j++)
        {
            cout<<arr[i][j];
        }

    }
    return 0;
}