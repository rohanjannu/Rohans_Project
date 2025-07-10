#include<bits/stdc++.h>
using namespace std;


struct Node
{
    int data;
    Node* next;
    Node* prev;
    Node(int x=0)
    {
        data=x;
        next=NULL;
        prev=NULL;
    }
};

Node* insertatbegin(Node *head,int x)
{
    Node *temp=new Node(x);
    temp->next=head;
    if(head!=NULL)
    head->prev=temp;
    return temp;
}
Node* insertatend(Node *head,int x)
{
    Node *temp=new Node(x);
    if(head==NULL)
    return temp;
    Node *curr=head;
    while(curr->next!=NULL)
    {
        curr=curr->next;
    }
    curr->next=temp;
    temp->prev=curr;
    return head;
}
Node* reverselinkedlist(Node* head)
{
    if(head==NULL || head->next==NULL) return head;
    Node *prev=NULL;
    Node *curr =head;
    while(curr!=NULL)
    {
        prev=curr->prev;
        curr->prev=curr->next;
        curr->next=prev;
        curr=curr->prev;

   }
   return prev->prev;
}
void printlist(Node *head)
{
    if(head==NULL)
    return;
    cout<<head->data<<" ";
    Node *cuur = head;
    for(Node *p=head->next; p!=head; p=p->next)
    cout<<p->data<<" ";
}
Node* deletehead(Node *head)
{
    if(head==NULL)
    return NULL;
    if(head->next==NULL)
    {
        delete head;
        return NULL;
    }
    else{
        Node *temp=head;
        head=head->next;
        head->prev=NULL;
        delete temp;
        return head;
    }
}
Node* deletelast(Node* head)
{
    if(head==NULL)
    return NULL;
    if(head->next==NULL)
    {
        delete head;
        return NULL;
    }
    Node* curr=head;
    while(curr->next!=NULL)
    curr=curr->next;
    curr->prev->next=NULL; // changes the next pointer and prev pointer to NULL
    delete curr;
    return head;
}
Node * circulardoubly(Node*head,int val)
{ 
    Node *temp = new Node(val);
    if(head==NULL)
    {
        temp->next=temp;
        temp->prev=temp;
        return temp;
    }
    temp->prev=head->prev;
    temp->next=head;
    head->prev->next=temp;// head prev will give the last node and nect of it will be assigned to temp 
    head->prev=temp;
    return temp;
}
int main()
{
    Node*head=new Node(10);
    Node*temp1=new Node(20);
    Node*temp2=new Node(30);
    head->next=temp1;
    temp1->prev=head;
    temp1->next=temp2;
    temp2->prev=temp1;
    head=insertatbegin(head,5);
    head=insertatend(head,60);
    head=reverselinkedlist(head);
    //printlist(head);
    head=deletehead(head);
    //printlist(head);
    head=deletelast(head);
    printlist(head);
    head=circulardoubly(head,20);
    printlist(head);
    cout<<endl;
    return 0;
}