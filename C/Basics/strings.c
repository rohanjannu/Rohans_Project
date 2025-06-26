#include <stdio.h>
#include <string.h>

int main() {
    char src[] = "Hello";
    char dest[20];
    
    // Copies "Hello" to dest
    strncpy(dest, src, 4);
    printf("%s", dest);

    char s1[30] = "Hello, ";
    char s2[] = "Geeks!";
    
    // Appends "Geeks!" to "Hello, "
    strcat(s1, s2);  
    printf("%s", s1);

    strncat(s1, s2, 4);  
    printf("%s", s1);

    char s1[] = "Apple";
    char s2[] = "Applet";
    
  	// Compare two strings 
  	// and print result
        int res = strncmp(s1, s2, 4);
    if (res == 0) 
        printf("s1 and s2 are same");
  	else if (res < 0)
      	printf("s1 is lexicographically " 
      	        "smaller than s2");
  	else
      	printf("s1 is lexicographically " 
      	       "greater than s2");

    char s[] = "Hello, World!";
    char *res = strchr(s, 'o');
    if (res != NULL)
        printf("Character found at: %ld index", res - s[0]);
    else
        printf("Character not found");

    char *pos = strstr(s, "Geeks");
    
    if (pos != NULL)
        printf("Found"); 
    else
        printf("Not Found");

          int n = 10;
    
    // Output formatted string into string bugger s
    sprintf(s, "The value is %d", n);
    printf("%s", s);
    
    char s[] = "Hello, Geeks, C!";
  	// Initializing tokens
    char *t = strtok(s, ", ");

  	// Printing rest of the tokens
    while (t != NULL) {
        printf("%s\n", t);
        t = strtok(NULL, ", ");
    }
    return 0;
}