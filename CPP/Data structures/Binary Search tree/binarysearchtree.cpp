#include<bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *left, *right;
    Node(int x)
    {
        data=x;
        left=right=NULL;
    }
};

bool search(Node* root,int x)
{
    if(root==NULL)
    return false;
    else if(root->data==x)
    return true;
    else if(root->data>x)
    return search(root->left,x);
    else
    return search(root->right,x);
}
Node* insertrecursive(Node* root,int x)
{
    if(root==NULL)
    return new Node(x);
    else if(root->data<x)
    root->right=insertrecursive(root->right,x);
    else if (root->data>x)
    root->left=insertrecursive(root->left,x);
    return root;
}
Node* insertiterative(Node *root,int x)
{
    Node *temp = new Node(x);
    Node *parent = NULL;
    Node * curr = root;
    while(curr!=NULL)
{
    parent=curr;
    if(curr->data<x)
    curr=curr->right;
    else if(curr->data>x)
    curr=curr->left;
    else
    return root;
}
if(parent==NULL)
return root;
if(parent->data<x)
parent->right=temp;
else if(parent->data>x)
parent->left=temp;
return root;
}

Node* getsuccessor(Node* root)
{
    Node* curr=root->right;
    while(curr!=NULL && curr->left!=NULL)
    {
        curr=curr->left;
    }
    return curr;
}
Node*  deleteinbst(Node* root,int x)
{
    if(root==NULL)
    return root;
    if(root->data>x)
    {
        root->left=deleteinbst(root->left,x);
    }
    else if(root->data<x)
    {
        root->right=deleteinbst(root->right,x);
    }
    else{
        if(root->left==NULL)
        {
             Node *temp=root->right;
             delete root;
             return temp;
        }
        else if(root->right==NULL)
        {
            Node *temp= root->left;
            delete root;
            return temp;
        }

    else{
    Node *succ = getsuccessor(root);
    root->data=succ->data;
    root->right=deleteinbst(root->right,succ->data);
}
    }
    return root;
}
Node* floor(Node* root,int x)
{
    Node* res = NULL;
    while(root!=NULL)
    {
       if(root->data==x)
        return root;
        else if(root->data>x)
        {
            root=root->left;
        }
        else
        {
            res=root;
            root=root->right;
        }
    }
return res;
}
Node *ceil(Node* root,int x)
{
    Node* res = NULL;
    while(root!=NULL)
    {
        if(root->data==x)
        return root;
        else if(root->data>x)
        {
            res=root;
            root=root->left;
        }
        else{
            root=root->right;
        }
    }
    return res;
}
int main()
{
    Node *root = new Node(15);
    root->left = new Node(5);
    root->right = new Node(20);
    root->left->left = new Node(3);
    root->right->right = new Node(80);
    root->right->left = new Node(18);
    root->right->left->left = new Node(16);
    insertrecursive(root,40);
    insertiterative(root,50);
    cout<<boolalpha<<search(root,40)<<endl;
    deleteinbst(root,50);
    cout<<search(root,50)<<endl;
    cout<<(floor(root,5))->data<<endl;
    cout<<(ceil(root,10))->data<<endl;
    return 0;
}