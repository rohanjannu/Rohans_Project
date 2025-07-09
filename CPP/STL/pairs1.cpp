#include<iostream>

using namespace std;

int main() {
    pair<int, double> p1(10, 20.5);
    cout << "First: " << p1.first << endl;    
    cout << "Second: " << p1.second << endl;

    pair<string, char> p2;
    p2={"Hello", 'A'};
    cout << "First: " << p2.first << endl;    
    cout << "Second: " << p2.second << endl;

    pair<int, int> p3;
    p3=make_pair(30,40); //redundant now
    cout << "First: " << p3.first << endl;    
    cout << "Second: " << p3.second << endl;

    return 0;
}