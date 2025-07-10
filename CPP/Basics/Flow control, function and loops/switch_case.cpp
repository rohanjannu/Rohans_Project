#include<iostream>
using namespace std;

int main()
{
    int x=0,y=0;
    char C;
    cin>>C;
    switch(C)
    {
        case 'U':
        y++;
        break;
        case 'D':
        y--;
        break;
        case 'R':
        x++;
        break;
        case 'L':
        x--;
        break;
        default:
        cout<<"Please enter any one of 'U', 'D', 'R', 'L' \n";
        break;
    }
    cout<<"The cordinate vales are "<<x<<" "<<y<<endl;
    return 0;
}