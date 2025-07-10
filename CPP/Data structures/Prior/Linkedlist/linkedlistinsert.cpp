#include<iostream>
using namespace std;

struct Node
{
    int data;
    Node* next;
    Node (int d)
    {
        data=d;
        next=nullptr;
    }
};

Node* sortedinsert(Node* head, int val)
{
    Node *temp = new Node(val);
    if(head==nullptr)
    return temp;
    if(val<head->data)
    {
        temp->next = head;
        return temp;
    }

    Node *curr = head;
    while(curr->next!=nullptr && curr->next->data<val)
    curr=curr->next;
    temp->next = curr->next; 
    curr->next=temp;
    return head;

}
int main()
{
    Node* head = new Node(10);
    head = sortedinsert(head,10);
    head = sortedinsert(head,20);
Node*  curr = head;
    while(curr!=nullptr)
    {
        cout<<curr->data<<endl;
        curr=curr->next;
    }
    return 0;
}
