#include <stdio.h>

struct test {
    // Unsigned integer member x
    unsigned int x;
    // Bit-field member y with 33 bits
    //long int y : 33;
    // Unsigned integer member z
    unsigned int z;
};

int main()
{
    // Print the size of struct test
    printf("%lu", sizeof(struct test));

    return 0;
}