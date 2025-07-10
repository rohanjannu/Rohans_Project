#include<bits/stdc++.h>
using namespace std;

struct minHeap
{
    int *arr;
    int size;
    int capacity;

    minHeap(int c)
    {
        size = 0;
        capacity = c;
        arr = new int[c];
    }
    int left(int i)
    {
        return (2*i+1);
    }
    int right(int i)
    {
        return (2*i+2);
    }
    int parent(int i)
    {
        return ((i-1)/2);
    }
    void insert(int x)
    {
        if(size==capacity)
        return;
        size++;
        arr[size-1]=x;
        for(int i=size-1;i!=0 && arr[parent(i)]>arr[i];)
        {
            swap(arr[i],arr[parent(i)]);
            i=parent(i);
        }
    }
    void minheapify(int i)
    {
        int lt = left(i);
        int rt = right(i);
        int smallest = i;
        if(lt < size && arr[lt]<arr[i])
            smallest=lt;
        if(rt<size && arr[rt]<arr[smallest])
        smallest=rt;
        if(smallest!=i)
        {
            swap(arr[i],arr[smallest]);
            minheapify(smallest);
        }
    }
    int extractmin()
    {
        if(size==0)
        return INT_MAX;
        if(size==1)
        {
        size--;
        return arr[0];
        }
        swap(arr[0],arr[size-1]);
        size--;
        minheapify(0);
        return arr[size];
    }
    void decreasekey(int i,int x)
    {
        arr[i]=x;
        while(i!=0 && arr[parent(i)]>arr[i])
        {
            swap(arr[i],arr[parent(i)]);
            i=parent(i);
        }
    }
    void deleter(int i,int x)
    {
        decreasekey(i,x);
        extractmin();
    }
    void buildheap()
    {
        for(int i=(size-2)/2;i>=0;i--)
        {
            minheapify(i);
        }
    }
};


int main()
{
    minHeap h(11);
    h.insert(3); 
    h.insert(2);
    h.insert(15);
    h.insert(40);
    h.minheapify(0);
    cout<<h.extractmin()<<endl;
    h.decreasekey(2,5);
    h.deleter(3,-1000);
    h.buildheap();
    return 0;

}