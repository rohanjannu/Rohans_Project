#include <stdio.h>

// Define macro that prints current line number and filename
#define PrintLineNum printf("Line number is %d in file named %s\n", __LINE__, __FILE__)

int main() {
    PrintLineNum;

    // Change line number to 20 and filename to "main.c"
    PrintLineNum;

    // Change line number to 30 and filename to "index.c"
    #line 30 "index.c"
    PrintLineNum;
    PrintLineNum;

    return 0;
}