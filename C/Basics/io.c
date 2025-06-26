#include <stdio.h>

int main() {
  	int age = 22;
    char name[20];
    char str[] = "geeksforgeeks";
    char str1[10];
    // Prints Age
    printf("The value of the variable age is %d\n", age);  
    fputs("This is my string", stdout); //stdout is the console
    scanf("%d", &age);  
    getchar();
    printf("Enter your name: \n");
    fgets(name, sizeof(name), stdin); //stdin is keyboard //use getchar() before fgets to clear the buffer
    fputs(name, stdout);
    printf("%20s\n", str);
    printf("%-20s\n", str);
    printf("%20.5s\n", str);
    printf("%-20.5s\n", str);

    //scansets
    printf("Enter a string: ");
    scanf("%[A-Z]s",str1);
    printf("You entered: %s\n", str1);
    return 0;
}