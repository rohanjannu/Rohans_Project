#include<iostream>
using namespace std;
//Array data structures //search, insert and delete operation for a fixed sized array

int insert(int arr[], int n, int x, int cap, int pos)
{
	if(n == cap)
		return n;

	int idx = pos - 1;

	for(int i = n - 1; i >= idx; i--)
	{
		arr[i + 1] = arr[i];
	}

	arr[idx] = x;

	return n + 1;
} 

int del(int *arr,int n,int de)
{
    int i,j;
    for(i=0;i<n;i++)
    {
        if(arr[i]==de)
        {
            break;
        }
    }
    if(i==n)
    {
        cout<<"Not found";
        return n;
    }
    for(j=i;j<n;j++)
    {
        arr[j]=arr[j+1];
    }
    arr[j]='\0';
    return n-1;
}

int search(int arr[],int n,int q)
{
    for(int i=0;i<n;i++)
    {
        if(arr[i]==q)
        return i;
    }
    return 0;
}
int main()
{
    int arr[10]{40,20,56,49,59};
    int n=5,x,cap=10,pos;
    int q;
    cout<<"\"Enter the element that you want to insert\" and where?";
    cin>>x;
    cin>>pos;
    cout<<"The value of n before insertion = "<<n<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    n = insert(arr,n,cap,x,pos);
    cout<<"The value of n after insertion = "<<n<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<"What do you want to search?\n";
    cin>>q;
    int w=search(arr,n,q);
    if(w)
    {
        cout<<"The element found at index "<<w<<endl;
    }
    else
    {
        cout<<"The element does not exist\n"<<endl;
    }
    int de;
    cout<<"Enter the value that you want to delete\n";
    cin>>de;
    n=del(arr,n,de);
    cout<<"The array after deletion"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}