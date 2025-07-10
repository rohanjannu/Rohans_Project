#include<bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node* left;
    Node* right;
    Node(int x)
    {
        data=x;
        left=right=NULL;
    }

};

void inorder(Node *root)
{
    if(root==NULL)
        return;
    inorder(root->left);
    cout<<(root->data)<<" ";
    inorder(root->right);
    
}
void preorder(Node *root)
{
    if(root==NULL)
        return;
    cout<<(root->data)<<" ";
    preorder(root->left);
    preorder(root->right);
    
}
void postorder(Node *root)
{
    if(root==NULL)
        return;
    postorder(root->left);
    postorder(root->right);
     cout<<(root->data)<<" ";
    
}
int height(Node* root)
{
    if(root == NULL)
        return 0;
        else
        {
            int lheight = height(root->left);
            int rheight = height(root->right);
            return max(lheight,rheight)+1;
        }
}
void printatk(Node *root,int k)
{
    if(root==NULL)
    return;
    if(k==0)
    {
        cout<<root->data<<" ";
    }
    printatk(root->left,k-1);
    printatk(root->right,k-1);
    
}
void printlevel(Node* root)
{
    if(root==NULL)
    return;
    queue<Node*> q;
    q.push(root);
    while(q.empty()==false)
    {
        Node *curr=q.front();
        q.pop();
        cout<<curr->data<<" ";
        if(curr->left!=NULL)
        {
            q.push(curr->left);
        }
        if(curr->right!=NULL)
        {
            q.push(curr->right);
        }
    }
}
int sizeofbinarytree(Node* root)
{
    if(root==NULL)
    return 0;
    return (1+sizeofbinarytree(root->left)+sizeofbinarytree(root->right));
}
int getmax(Node* root)
{
    if(root==NULL)
    return INT_MIN;
    return max(root->data,max(getmax(root->left),getmax(root->right)));
}
void iterativrinorder(Node* root)
{
    stack<Node *>s;
    Node *curr=root;
    while(curr!=NULL || s.empty()== false)
    {
        while(curr!=NULL)
        {
            s.push(curr);
            curr=curr->left;
        }
        curr=s.top();
        s.pop();
        cout<<curr->data<<" ";
        curr=curr->right; 
    } 

}
void iterativepreorder(Node* root)
{
    stack<Node*> s;
    Node *curr=root;
    while(curr!=NULL || s.empty()==false)
    {
        while(curr!=NULL)
        {
            s.push(curr);
            cout<<curr->data<<" ";
            curr=curr->left;
        }
        curr=s.top();
        s.pop();
        curr=curr->right;
    

    }

}
void iterativepostrorder(Node* root)
{
    stack<Node*> s;
    Node *curr=root;
    while(curr!=NULL || s.empty()==false)
    {
        while(curr!=NULL)
        {
            s.push(curr);
            curr=curr->left;
        }
        curr=s.top();
        s.pop();
        curr=curr->right;
        cout<<curr->data<<" ";
    }

}
int main()
{
    Node *root = new Node(10);
    root->left = new Node(20);
    root->right = new Node(30);
    root->left->left = new Node(40);
    root->left->right = new Node(50);
    root->left->right->left = new Node(70);
    root->left->right->right = new Node(80);
    root->right->right = new Node(60);
    root->right->right->left = new Node(90);
    inorder(root);
    cout<<endl;
    preorder(root);
    cout<<endl;
    postorder(root);
    cout<<height(root);
    cout<<endl;
    printatk(root,2);
    cout<<endl;
    printlevel(root);
    cout<<endl;
    cout<<sizeofbinarytree(root);
    cout<<endl;
    cout<<getmax(root);
    cout<<endl;
    iterativrinorder(root);
    cout<<endl;
    iterativepreorder(root);
    cout<<endl;
    iterativepostrorder(root);
    cout<<endl;
    return 0;
}