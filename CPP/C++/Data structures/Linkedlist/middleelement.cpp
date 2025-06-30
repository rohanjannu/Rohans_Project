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

void findmiddle(Node *head)
{
    if(head==nullptr)
    return;
    Node *slow=head,*fast=head;
    while(fast!=nullptr  && fast->next!=nullptr)
    {
        slow=slow->next;
        fast=fast->next->next;
    }
    cout<<slow->data<<endl;
}

int main()
{
    Node* head;
    head= new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);
    head->next->next->next = new Node(40);
    findmiddle(head);
    return 0;
}