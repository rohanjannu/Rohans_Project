#include <stdio.h>
 
#define MACRO(num, str) {\
            printf("%d", num);\
            printf(" is");\
            printf(" %s number", str);\
            printf("\n");\
           }

           #include <stdio.h>

int main()
{
    printf("Current File :%s\n", __FILE__);  // there are standard macros in C that provide information about the file, line number, date, and time of compilation.
    printf("Current Date :%s\n", __DATE__);
    printf("Current Time :%s\n", __TIME__);
    printf("Line Number :%d\n", __LINE__);
    return 0;
}