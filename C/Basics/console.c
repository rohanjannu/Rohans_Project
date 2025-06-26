#include <stdio.h>

int main()
{
    char str[50];
    int a = 2, b = 8,c,d;

    // The string "2 and 8 are even number"
    // is now stored into str
    sprintf(str, "%d and %d are even number",a, b);  //the string will be stores in str and not printed on the console

    // Displays the string
    printf("%s", str);
    sscanf(str, "a = %d and b = %d",&c, &d);

    // Displays the value of c and d
    printf("c = %d and d = %d", c, d);
    return 0;
}