// C program to illustrate  \a escape sequence
#include <stdio.h>

int main(void)
{
    // output may depend upon the compiler
    printf("My mobile number "
           "is 7\a8\a7\a3\a9\a2\a3\a4\a0\a8\a");
               printf("Hello \b\b\b\b\b\bHi Geeks");
                   printf("Hello\n");
    printf("GeeksforGeeks");
        printf("Hello \t GFG");
            printf("Hello friends\v");

    printf("Welcome to GFG");
        printf("Hello   Geeks \rGeeksfor");
            printf("Hello\\GFG");
                printf("\' Hello Geeks\n");
    printf("\" Hello Geeks");
        printf("\?\?!\n");
            char* s = "A\072\065";
    printf("%s", s);
        char* x = "B\x4a";
    printf("%s", x);
    return (0);
}