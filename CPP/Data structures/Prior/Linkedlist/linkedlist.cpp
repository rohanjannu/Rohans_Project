#include<bits/stdc++.h>
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
int main()
{
    Node *head = new Node(10);
    Node *temp1 = new Node(20);
    Node *temp2 = new Node(40);

    head->next = temp1;
    temp1->next = temp2;

    cout<<head->data<<" "<<temp1->data<<" "<<temp2->data<<" "<<endl;
    return 0;
}