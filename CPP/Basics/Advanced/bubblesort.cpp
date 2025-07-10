#include<iostream>
using namespace std;

void bubblesort(int arr[],int n)
{
    int i,j;
    bool swapped=0;
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                swap(arr[j],arr[j+1]);
                swapped=true;
            }
            
        }
        if(swapped ==false);
        break;
    }

}
int main()
{
    int arr[]{10,20,30,50,40,60};
    int n= sizeof(arr)/sizeof(arr[0]);
    bubblesort(arr,n);
    for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";
    return 0;
}