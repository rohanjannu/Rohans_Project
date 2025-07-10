#include<iostream>
using namespace std;    //this program can be used for both double linked list and binary tree

struct node
{
    int data;  //auto variables cannot be used inside structures
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