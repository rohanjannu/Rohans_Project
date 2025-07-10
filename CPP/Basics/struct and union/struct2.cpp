#include<iostream>
using namespace std;



    struct rohan
    {
        int x;
        int y;
    };

    struct s1
    {
        char  c1;
        double d1;
        char c2;

    }__attribute__((packed));
    struct s2
    {
        char  c1;
        char c2;
        double d1;
    };

    void print(rohan p[5])
    {
        for(int i=0;i<5;i++)
        {
            cout<<p[i].x<<endl;
            cout<<p[i].y<<endl;
        }
    }

int main()
{
    rohan r;
    rohan *ptr = &r;
    ptr->x = 10;
    ptr->y=20;
    rohan a[5];
    for(int i=0;i<5;i++)
    {
        a[i].x=i;
        a[i].y=i*10;
    }
    print(a);
cout<<sizeof(s1)<<"  "<<sizeof(s2);

}