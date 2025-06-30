#include<iostream>
#include<vector>
using namespace std;


int main()
{
    int i,j,k,n=5;

    vector<vector <int>> matA(n, vector<int> (n,0)); //here n denotes to the size of matrix with 0 being the value its elements are initiailised with
    vector<vector <int>> matB(n, vector<int> (n,0));
    vector<vector <int>> res(n, vector<int> (n,0));

    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            cin>>matA[i][j];
        }
    }

    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            cin>>matB[i][j];
        }
    }

for(i=0;i<n;i++)
{
    for(j=0;j<n;j++)
    {
        res[i][j]=0;
        for(k=0;k<n;k++)
        {
            res[i][j] += matA[i][k]*matB[k][j];
        }
    }
}

	for(int i = 0; i < n ;i++){
        for(int j = 0; j < n; j++){
            cout<< res[i][j] << " ";
        }
        cout << "\n";
    }

	return 0; 
} 

