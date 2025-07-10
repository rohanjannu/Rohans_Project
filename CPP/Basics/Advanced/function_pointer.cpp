#include<iostream>
#include<algorithm>
using namespace std;

void fun()
{
    cout<<"function";
}
int add(int a,int b)
{
    cout<<"function1"<<endl;
    return a+b;
}
int mul(int a,int b)
{
    cout<<"function1"<<endl;
    return a*b;
}
int compute(int x,int y, int (*func_ptr)(int a,int b))
{
    return func_ptr(x,y);
}
bool compar(int x,int y){return abs(x)>abs(y);}
int main()
{
    int a=5;
    int b=5;
    int arr[]{-1,2,9,2,-10,5};
    int n=6;
    void (*func_ptr1)() = fun;  // auto func_ptr1 = fun;
    //int(*func_ptr2)(int,int)=add;  //auto func_ptr2 = add;
    cout<<compute(a,b,mul);
    //sort(arr,arr+n,compar);
    auto comp = [](int x,int y){return abs(x)>abs(y);};
    sort(arr,arr+n,comp);
  //  sort(arr,arr+n,[](int x,int y){return abs(x)>abs(y);});
    for(auto x:arr)cout<<x<<" ";
    cout<<endl;

}