#include<iostream>
using namespace std;    //this program can be used for both double linked list and binary tree

struct node
{
    int data;
    auto b=10;
    cout<<typeid(b).name();
    union 
    {
        struct{
            node *left,*right;

        };
        struct{
            node *prev,*next;
        };
    };
    
};