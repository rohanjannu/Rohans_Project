#include<iostream>
using namespace std;


class rohan
{
    int x,y;
    public:
    int print(int a,int b) throw (string)
    {
        if(b==0) throw string("B is zero");
        return (a/b);
    }

};

int main()
{
try{
    rohan r;
    cout<<r.print(5,0);

    return 0;
}


catch(string &s)
{
    cout<<s<<endl;
}
return 0;
}