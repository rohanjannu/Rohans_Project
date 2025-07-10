#include<bits/stdc++.h>
using namespace std;
void reversek(queue<int> &q,int k)
{
    if(q.empty()==true || k>q.size() || k<=0)
    return;
stack<int> s;
for(int i=0;i<k;i++)
{
    s.push(q.front());
    q.pop();
}
while(s.empty()==false)
{
q.push(s.top());
s.pop();
}
for(int i=0;i<q.size()-k;i++)
{
    q.push(q.front());
    q.pop();
}
}
int main()
{
    queue<int> q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    cout<<q.front()<<" "<<q.back()<<endl;
    q.pop();
    cout<<q.front()<<" "<<q.back()<<endl;
    cout<<q.empty();
    int k=3;
    reversek(q,k);  
    return 0;
}