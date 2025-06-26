#include <stdio.h>
int main(){

    int arr[5] = { 1, 2, 3, 4, 5 };
    
    // Find the size of array arr
    int n = *(&arr + 1) - arr;  //pointer arithmetic to find the size of the array
//does not work in case of array decay, when we pass the arrayas a pointer ti another functrion
    printf( "%d", n);
    return 0;
}