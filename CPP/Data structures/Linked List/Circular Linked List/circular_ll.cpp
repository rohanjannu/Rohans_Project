#include<bits/stdc++.h>
using namespace std;

struct Node
{
  int data;
  Node *next;
  Node(int x=0)
  {
    data=x;
    next=NULL;
  }  
};

void printlist(Node *head)
{
    if(head==NULL)
    return;
    cout<<head->data<<" ";
    Node *cuur = head;
    for(Node *p=head->next; p!=head; p=p->next)
    cout<<p->data<<" ";
}
void printlistdo(Node *head)
{
    if(head==NULL)
    return;
    Node *p=head;
    do
    {
        cout<<p->data<<"  ";
        p=p->next;
    } while(p!=head);
    
}
Node* insertatbegin(Node *head,int val)
{
    Node *temp=new Node(val);
    if(head==NULL)
    {
        temp->next=temp;
        return temp;
    }
    else
    {
        temp->next=head->next;
        head->next=temp;
        int t=head->data;
        head->data=temp->data;
        temp->data=t;
        
    }
return head;
}
Node* insertatend(Node *head,int val)
{
    Node *temp=new Node(val);
    if(head==NULL)
    {
        temp->next=temp;
        return temp;
    }
    else
    {
        temp->next=head->next;
        head->next=temp;
        int t=temp->data;
        temp->data=head->data;
        head->data=t;
        return temp;
    }

}
Node* deleteathead(Node *head)
{
    if(head==NULL)
    return NULL;
    if(head->next==head)
    {
    delete head;
    return NULL;
    }
    Node* curr=head;
    while(curr->next!=head)
    {
        curr=curr->next;
    }
    curr->next=head->next;
    delete head;
    return curr->next;

}
Node* deletekth(Node *head,int k)
{
    if(head==NULL) return head;
    if(k==1)
    return deleteathead(head);
    Node *curr=head;
    for(int i=0;i<k-2;k++)
    curr=curr->next;
    Node *temp=curr->next;
    curr->next=curr->next->next;
    delete temp;
    return head;

}
int main()
{
    Node *head=new Node(10);
    head->next=new Node(20);
    head->next->next=new Node(30);
    head->next->next->next=new Node(40);
    head->next->next->next->next=head;
    printlistdo(head);
    cout<<endl;
    head=insertatbegin(head,5);
    printlistdo(head);
    cout<<endl;
    head=insertatend(head,50);
    head=deleteathead(head);
    printlistdo(head);
    head=deletekth(head,2);
    cout<<endl;
    printlistdo(head);
    return 0;
}