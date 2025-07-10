#include<iostream>
using namespace std;

int main()
{
    int arr[]{1,2,3,4,4};
    int n=5;
    int count = 0;
    bool isDistinct=true;
    int i,j=0;
    for(i=0;i<n;i++)
    {
        for(j=i-1;j>=0;j--)
        {
            if(arr[i]==arr[j])
            {
                isDistinct=false;
                break;
            }
        }
        if(isDistinct)
        {
            count++;
        }
        isDistinct=true;
    }
cout<<count<<"\n";
    return 0;
}