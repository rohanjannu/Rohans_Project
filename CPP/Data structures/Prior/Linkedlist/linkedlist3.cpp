#include<bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *next;
 /*  Node (int a)
    {
        data = a;
        next = nullptr;
    }*/
};

void printlist(Node* head)
{
    if(head==nullptr)
    return;

    cout<<head->data<<" ";
    printlist(head->next);
}

int main()
{
Node *head = new Node{1,new Node{2, new Node{3, nullptr}}};
printlist(head);
return 0;
}