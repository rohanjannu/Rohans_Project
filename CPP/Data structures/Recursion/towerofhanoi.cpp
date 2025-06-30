#include<iostream>
using namespace std;

int towerofhanoi(int n,char A, char B, char C)
{
if(n==1)
{
    cout<<"Mov 1 from "<<A<<" to "<< C <<endl;
    return 0;
}
towerofhanoi(n-1,A,C,B);
cout<<"Mov "<<n<<" from "<<A<<" to "<< C <<endl;
towerofhanoi(n-1,B,A,C);
}

int main()
{
int n=3;
towerofhanoi(n,'A','B','C');
    return 0;
}