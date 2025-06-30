#include<iostream>
using namespace std;

int lrbyone(int arr[],int n,int left)
{
    int temp[left];
    for(int i=0;i<left;i++)
    {
        temp[i]= arr[i];
    }

    for(int i=left;i<n;i++)
    {
        arr[i-left]=arr[i];
    }

    for(int i=0;i<n;i++)
    {
        arr[n-left+i]=temp[i];
    }
}

int movezeros(int *arr,int n)
{
    int i,count = 0;

    for(i=0;i<n;i++)
    {
        if(arr[i]!=0)
        {
            arr[count]=arr[i];
            count++;

        }
    }
return count;
}

int removeduplicates(int arr[],int n) //only for sorted arrays
{
    int i,res=1;
    for(int i=1;i<n;i++)
    {
        if(arr[i]!=arr[res-1])
        {
            arr[res]=arr[i];
            res++;
        }
    }
    return res;
}

int reversea(int *arr,int n,int j)
{
    int low=n;
    int high=j;
    int temp=0;
    while(low<high)
    {
        temp=arr[low];
        arr[low]=arr[high];
        arr[high]=temp;
        low++;high--;
    }
}

int reversalalgo(int arr[],int n, int left)
{
    reversea(arr,0,left-1);
    reversea(arr,left,n-1);
    reversea(arr,0,n-1);

}
int main()
{
    int i;
    int arr[]{10,20,30,40,50,60};
    int arr1[]{10,20,20,30,40,40,40,40,50};
    int arr2[]{10,0,0,0,0,0,0,0,20,0,0,0,0,30,40,0,0,0,50};
    int m=6,n=9,left,o=19;
    int res=removeduplicates(arr1,n);
    for(i=0;i<res;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<"Enter the number of times you want to left rotate the array\n";
   cin>>left;
 //   lrbyone(arr,m,left);
    m=6;
    for(i=0;i<m;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    reversalalgo(arr,m,left);
    for(i=0;i<m;i++)
    {
        cout<<arr[i]<<" ";
    }
    int count=movezeros(arr2,o);
    for(i=0;i<count;i++)
    {
        cout<<arr2[i]<<" ";

    }
    cout<<endl;
    return 0;
}