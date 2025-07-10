#include<bits/stdc++.h>
using namespace std;

struct queue
{
    int size,cap;
    int *arr;
    queue(int c)
    {
        cap=c;
        size=0;
        arr=new int[cap];
    }
bool isfull()
{
    return size==cap;
}
bool isempty()
{
    return size==0;

}
void enqueue(int x)
{
    if(isfull()) return;
        arr[size]=x;
        size++;
}
void dequeue()
{
    if(isempty()) return;
    for(int i=0;i<size-1;i++)
    {
        arr[i]=arr[i+1];
    }
    size--;
}
int getfront()
{
    if(isempty()) return-1;
    else return 0;
}
int getrear()
{
    if(isempty()) return -1;
    else return size-1;
}
};

struct queue_e
{
    int size,cap,front;
    int *arr;
    queue_e(int x)
    {
        cap=x;
        arr=new int[cap];
        size=0;
        front=0;
    }
    bool isfull()
    {
        return size==cap;
    }
    bool isempty()
    {
        return size==0;
    }
    int getfront()
    {
        if(isempty()) return -1;
        return front;
    }
    int getrear()
    {
        if(isempty()) return -1;
        return (front+size-1)%cap;
    }
    int enqueue(int x)
    {
        if(isfull()) return -1;
        else{
            arr[(getrear()+1)%cap]=x;
            size++;
            return 0;
        }
    }
    int dequeue()
    {
        if(isempty()) return -1;
        else{
            int out = arr[front];
            front=(front+1)%cap;
            size--;
            return out;
        }
    }

};