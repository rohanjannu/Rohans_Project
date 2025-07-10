#include<bits/stdc++.h>
using namespace std;  

struct node
{
    int data;
    node* next;
    node(int x)
    {
        data=x;
        next=NULL;
    }
};
struct queue
{
    node*  front, *rear;
    queue()
    {
        front=NULL;
        rear=NULL;
    }
    void enqueue(int x)
    {
        node *temp=new node(x);
        if(front==NULL)
        {
            front=rear=temp;
            return;
        }
        rear->next=temp;
        rear=temp;
    }
    void deque()
    { 
        if(front==NULL) return;
        node* temp=front;
        front=front->next;
        if(front==NULL){rear=NULL;}
        delete (temp);
    }
};
int main()
{
    return 0;
}