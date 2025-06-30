#include<iostream>
using namespace std;

inline void print()
{
    cout<<"In line function"<<endl;
}

int main()
{
    print();  ///the inline code is moved here and no activation required will be created and no function call will be created thus removing multiple overheads
    return 0;  //In macros there is no typechecking but in inline function there is typechecking 
}