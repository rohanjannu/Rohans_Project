#include <stdio.h>

// Defining a macro for PI
#define PI 3.14159

int main(){
  
// Check if PI is defined using #ifdef
#ifdef PI
    printf("PI is defined\n");

// If PI is not defined, check if SQUARE is defined
#elif defined(SQUARE)
    printf("Square is defined\n");

// If neither PI nor SQUARE is defined, trigger an error
#else
    #error "Neither PI nor SQUARE is defined"
#endif

// Check if SQUARE is not defined using #ifndef
#ifndef SQUARE
    printf("Square is not defined");

// If SQUARE is defined, print that it is defined
#else
    printf("Square is defined");
#endif

    return 0;
}