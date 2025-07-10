#include<iostream>
#include<vector>
using namespace std;

int main()
{
    //Double pointer // here the array is created on heap
    int **arr;
    int m=3,n=2;
    arr = new int *[m];
    for(int i=0;i<m;i++)
    {
        arr[i]=new int[n];
    }
    //Array of pointers //here the array is defined on stack
    int *arr1[m];
    for(int i=0;i<n;i++)
    {
        arr1[i]=new int[n];
    }

    //Array of vectors
    vector<int> arr2[m];
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            arr2[i].push_back(10);
        }
    }
    vector<vector<int>> arr3;
    for(int i=0;i<m;i++)
    {
        vector<int> v;
        for(int i=0;i<n;i++)
        {
            v.push_back(10);
        }
        arr3.push_back(v);
    }

}