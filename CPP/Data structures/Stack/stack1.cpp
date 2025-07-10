#include<bits/stdc++.h>
using namespace std;

struct myStack  //Array implementation of the stack
{
    int cap;
    int top;
    int *arr;

    myStack(int x)
    {
        arr=new int[x];
        cap=x;
        top=-1;
    }
    int push(int x)
    {
        if(top == cap-1) return -1; // Stack is full
        top++;
        arr[top] = x;
        return 0; // Success
    }   
    int pop()
    {
        if(top==0)  return -1; // Stack is empty
        return arr[top];
        top--;
    }
    bool isEmpty()
    {
        return (top == -1);
    }
    int peek()
    {
        if(top == -1) return -1; // Stack is empty
        return arr[top];
    }
};
int main()
{
    stack<int> s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);
  //  cout<<(s.peek());
    s.size();
    cout << "Stack elements: ";
    while (!s.empty()) {
        cout << s.top() << " ";
        s.pop();
    }
    cout << endl;

    myStack st(5);
    st.push(1);
    st.push(2);
    cout<<st.peek()<<endl;
    st.pop();
    cout<<st.isEmpty()<<endl;  //v.push_back() pr v.pop_back() in vector implementation
    st.pop();
    return 0; 
}