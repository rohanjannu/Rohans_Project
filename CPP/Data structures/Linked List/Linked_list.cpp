#include<bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *next; //if the next object is not of Node type then you can pass object_type *next to link to other object
    Node(int x=0)
    {
        data=x;
        next=NULL;
    }
};

void printList(Node *head)
{
    Node *curr=head;
    while(curr!= NULL)
    {
        cout<<curr->data<<" ";
        curr=curr->next;
    }
}

void recursivetraverse(Node *head)
{
    if(head==NULL)
    return;
        cout<<head->data<<" ";
        recursivetraverse(head->next);
    
}

int traversesearch(Node *head,int l)
{
    int pos=1;
    Node *curr=head;
    while(curr!=NULL)
    {
        if(curr->data==l)
        return pos;
        pos++;
        curr=curr->next;
    }
    return -1;
}

int recursivesearch(Node* head,int val)
{
    if(head==NULL)
    return -1;
    if(head->data==val)
    return 1;
    else{
    int res=recursivesearch(head->next,val);
    if(res==-1) return -1;
    else return (res+1);
    }
}

Node* insertatbegin(Node* head,int val)
{
    Node *temp=new Node(val);
    temp->next=head;
    return temp;
}

Node* insertatend(Node *head,int val)
{
    Node *temp=new Node(val);
    if(head==NULL)
    {
        return temp;
    }
    Node *curr=head;
    while(curr->next!=NULL)
    {
        curr=curr->next;
    }
    
    curr->next=temp;
    return head;
}
Node* deletefirstnode(Node *head)
{
    if(head==NULL)
    return NULL;
    Node *temp =head->next;
    delete head;
    return temp;
}
Node* deleteendnode(Node *head)
{
    if(head==NULL)
    if(head->next==NULL)
    {
        delete head;
        return NULL;
    }
    Node *curr=head;
    while(curr->next->next!=NULL)
    {
        curr=curr->next;
    }
    delete (curr->next);
    curr->next=NULL;
    return head;
}
Node* insertatpos(Node* head,int pos,int val)
{
    Node *temp=new Node(val);
    if(pos==1)
    {
        temp->next=head;
        return temp;
    }
    Node *curr=head;
    for(int i=1;i<=pos-2 && curr!=NULL;i++)
    {
        curr=curr->next;
    }
    if(curr==NULL)
    return head;
    temp->next=curr->next;
    curr->next=temp;
    return head;
}
Node *sortedinsert(Node *head,int x)
{
    Node* temp=new Node(x);
    if(head==NULL)
    return temp;

    if(x<head->data)
    {
        temp->next=head;
        return temp;
    }
    Node *curr=head;
    while(curr->next!=NULL && curr->next->data<x)
    curr=curr->next;
    temp->next=curr->next;
    curr->next=temp;
    return head;
}
void printmiddle(Node* head)
{
    Node* curr=head;
    int count=0;
    if(head==NULL)
    return;
    while(curr!=NULL)
    {
        curr=curr->next;
        count++;
    }
    curr=head;
    for(int i=0;i<count/2;i++)
    {
        curr=curr->next;
    }
    cout<<curr->data;
}
void printmiddleo(Node* head)
{
    if(head==NULL)
    return;
    Node* slow=head,*fast=head;
    while(fast!=NULL && fast->next!=NULL)
    {
        slow=slow->next;
        fast=fast->next->next;
    }
    cout<<(slow->data);
}
void nthnode(Node* head,int n)
{
    if(head==NULL)
    return;
    Node* first=head;
    for(int i=0;i<n;i++)
    {
        if(first==NULL)
        return;
        first=first->next;
    }
    Node* second=head;
    while(first!=NULL)
    {
        first=first->next;
        second=second->next;
    }
    cout<<(second->data);
}
int main()
{
    Node *head=new Node(10);
    Node *temp1=new Node(20);
    Node *temp2=new Node(30);
    Node *last=new Node(40);
    head->next=temp1; 
    temp1->next=temp2;
    temp2->next=last;
    //head->next->next=new Node(10); //this is also possible
    //printList(head);
    //recursivetraverse(head);
    int val=20;
    //cout<<traversesearch(head,val);
    //cout<<recursivesearch(head,val);
    head=insertatbegin(head, 50);
    head=insertatend(head,100);
    head=deletefirstnode(head);
    head=deleteendnode(head);
    head=insertatpos(head,2,90);
    sortedinsert(head,45);
    recursivetraverse(head);
    cout<<endl;
    printmiddle(head);
    cout<<endl;
    printmiddleo(head);
    nthnode(head,2);
    return 0;
}