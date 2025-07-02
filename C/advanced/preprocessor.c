#include <stdio.h>

// Macro Definition
#define LIMIT 5
#define AREA(l, b) (l * b)
// Undefine macro


int main(){
    for (int i = 0; i < LIMIT; i++) {
        printf("%d \n", i);
    }

      int a = 10, b = 5;
    // Finding area using above macro
    printf("%d", AREA(a, b));
    
    return 0;
}
#undef LIMIT

#include <stdio.h>

// macro with parameter


  