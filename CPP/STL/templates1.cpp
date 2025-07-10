#include<iostream>

using namespace std;


template <typename T,int limit = 100>


T mymax(T x, T y)
{
    if(limit>10)
    cout<< "Limit is greater than 10" << endl;
    return (x > y) ? x : y;
}

int main()
{
    cout << mymax<int,15>(10, 20) << endl;     // Calls mymax<int> //here 15 has to be a const value and not a variable
    cout << mymax(10.5, 20.5) << endl;      // Calls mymax<double>
    cout << mymax('A', 'B') << endl;        // Calls mymax<char>
    return 0;
}