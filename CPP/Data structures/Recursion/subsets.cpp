// C++ program to print all 
// permutations with duplicates allowed 
#include <bits/stdc++.h>
using namespace std;

/* Function to print permutations of string 
This function takes three parameters: 
1. String 
2. Starting index of the string 
3. Ending index of the string. */
void permute(string &str, int l, int r) 
{ 
    if (l == r) 
        cout << str << " "; 
    else
    { 
        for (int i = l; i <= r; i++) 
        { 
            swap(str[l], str[i]); 
            permute(str, l+1, r); 
            swap(str[l], str[i]); 
        } 
    } 
} 

/* Driver program to test above functions */
int main() 
{ 
    string str = "ABC";
    permute(str, 0, str.length()-1); 
    return 0; 
}