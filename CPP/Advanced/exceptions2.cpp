#include<iostream>
using namespace std;

class ArraySizeZero{};
class ArraySizeNegative{};

int average(int *arr,int n)
{
    if(n==0) throw ArraySizeZero();
    if(n<0) throw ArraySizeNegative(); //they keyword exception is important

    int sum=0;
    for(int i=0;i<n;i++)
    {
        sum+=arr[i];
    }
    return sum/n;
}

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    try{
        cout<<average(arr,n);

    }
    catch(ArraySizeZero &e1)
    {
        cout<<"Array size is zero\n";
    }
    catch(ArraySizeNegative &e2)
    {
        cout<<"Array size is negative\n";
    }
    return 0;
}