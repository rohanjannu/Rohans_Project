#include<bits/stdc++.h>
using namespace std;


struct Node
{
    int data;
    Node* next;
    Node(int d)
    {
        data=d;
        next=nullptr;
    }
};

void nthelement(Node* head,int n)
{
    if(head==nullptr)
    return;
    int len=0;
    Node* curr;
    for(curr=head;curr!=nullptr;curr=curr->next)
    {
        len++;
    }
    if(len<n)
    {
        return;
    }
    curr=head;
    for(int i=1;i<len-n+1;i++)
    {
        curr=curr->next;
    }
    cout<<curr->data<<endl;

}

void nthelement1(Node *head, int n)
{
    if(head==nullptr)
    return;
    Node *first = head;
    for(int i=0;i<n;i++)
    {
        if(first==nullptr) return;
        first=first->next;
    }
    Node *second = head;
    while(first!=nullptr)
    {
    second=second->next;
    first=first->next;
    }
    cout<<second->data<<endl;
}
int main()
{
    int n;
    Node* head = new Node(10);
    head->next= new Node(20);
    head->next->next= new Node(30);
    head->next->next->next= new Node(40);
    cout<<"Enter the valur whose nth element you need to find\n";
    cin>>n;
    nthelement(head,n);
    nthelement1(head,n);
    return 0;
}