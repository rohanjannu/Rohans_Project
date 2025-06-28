// C program to demonstrate working of a
// Predefined Identifier __func__

#include <stdio.h>

int main()
{
    // %s indicates that the program will read strings
    printf("In file:%s, function:%s() and line:%d", __FILE__, __func__, __LINE__);
    return 0;
}