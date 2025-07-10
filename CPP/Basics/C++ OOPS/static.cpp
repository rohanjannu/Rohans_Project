#include<iostream>
using namespace std;

class Player{
    public:
        static int count;
        Player(){count++;}
        ~Player(){count--;}
        static int getCount(){return count;}
        
};

int Player :: count = 0;

int main()
{
    Player p1, p2;
    cout << Player :: getCount() << " ";
    
    return 0;
}