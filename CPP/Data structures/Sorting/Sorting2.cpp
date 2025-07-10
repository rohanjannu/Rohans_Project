#include<bits/stdc++.h>
using namespace std;

void heapify(int arr[],int n,int i)
{
    int largest=i;
    int left = (2*i)+1;
    int right=(2*i)+2;
    if(left<n && arr[left]>arr[largest])
        largest=left;
    if(right<n && arr[right]>arr[largest])
        largest=right;
    if(largest!=i){
        swap(arr[i],arr[largest]);
        heapify(arr,n,largest);
    }
}

void build_heap(int arr[],int n)
{
    for(int i=(n-2)/2;i>=0;i--)
    {
        heapify(arr,n,i);
    }
}
void heap_sort(int arr[],int n)
{
    build_heap(arr,n);
    for(int i=n-1;i>0;i--)
    {
        swap(arr[0],arr[i]);
        heapify(arr,i,0);
    }
    
}
void counting_sort(int arr[],int n,int k)
{
    int count[k];
    for(int i=0;i<k;i++)
        count[i]=0;
    for(int i=0;i<n;i++)
        count[arr[i]]++;
    for(int i=1;i<k;i++)
    count[i]=count[i-1]+count[i];
    
    int output[n];
    for(int i=n-1;i>=0;i--)
    {
        output[count[arr[i]]-1]=arr[i];
        count[arr[i]]--;
    }
    for(int i=0;i<n;i++)
    arr[i]=output[i];
}
void counting_sortr(int arr[],int n,int exp)
{
    int output[n];
    int count[10]={0};
    for(int i=0;i<n;i++)
    count[(arr[i]/exp)%10]++;

    for(int i=1;i<10;i++)
    count[i]=count[i-1]+count[i];

    for(int i=n-1;i>=0;i--)
    {
        output[count[(arr[i]/exp)%10]-1]=arr[i];
        count[(arr[i]/exp)%10]--;
    }
    for(int i=0;i<n;i++)
    arr[i]=output[i];
}
void radix_sort(int arr[],int n)
{
    int max=arr[0];
    for(int i=0;i<n;i++)
    {
        if(arr[i]>max)
        {
            max = arr[i];
        }
    }
    for(int exp=1;max/exp>0;exp*=10)
    {
        counting_sortr(arr,n,exp);
    }
}

void bucket_sort(int arr[],int n,int k)
{
    int max_val=arr[0];
    for(int i=0;i<n;i++)
    max_val=max(max_val,arr[i]);
    max_val++;

    vector<int> bkt[k];
    for(int i=0;i<n;i++)
    {
        int bi=(k*arr[i])/max_val;
        bkt[bi].push_back(arr[i]);
    }

    for(int i=0;i<k;i++)
    sort(bkt[i].begin(),bkt[i].end());

    int index=0;
    for(int i=0;i<k;i++)
    {
        for(int j=0;j<bkt[i].size();j++)
        {
            arr[index++]=bkt[i][j];
        }
    }
}
int main()
{
    int arr[]{5,20,-15,40,0,4,1,2,3,5,6};
    int arr1[]{1,4,4,1,0,1};
    int arr2[]{319,212,6,8,100,50};
    int arrx[]{30,40,10,80,5,12,70};
    int n=sizeof(arr)/sizeof(arr[0]);
    int m=sizeof(arr1)/sizeof(arr1[0]);
    int p = sizeof(arr2)/sizeof(arr2[0]);
    int o = sizeof(arrx)/sizeof(arrx[0]);
    int k=5;
    //heap_sort(arr,n);
    //counting_sort(arr1,m,k);s
    //radix_sort(arr2,p);
    bucket_sort(arrx,o,k);
    for(auto x:arrx)
        cout<<x<<" ";
        cout<<endl;
}