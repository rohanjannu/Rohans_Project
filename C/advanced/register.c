// C program that demonstrates accessing the address of a
// register is invalid
#include <stdio.h>

int main()
{
    // Declaring a register variable 'i' and initializing it
    // with 10
    register int i = 10;
    // Creating a pointer variable 'a' and assigning the
    // address of 'i' to it
    int* a = &i;  //not valid
    printf("%d", *a);
    getchar();

     int k = 10;
    // Declaring a register pointer variable 'a' and
    // assigning the address of 'i' to it
    register int* b = &k;
    printf("%d", *b);
    getchar();
    return 0;
}