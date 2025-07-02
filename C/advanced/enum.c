#include <stdio.h>

// Defining enum
enum enm {
    a = 3, b = 2, c
};
typedef enum direction {
    EAST, NORTH, WEST, SOUTH
}Dirctn;

int main() {

    // Creating enum variable
    enum enm v1 = a;
    enum enm v2 = b;
    enum enm v3 = c;
    printf("%d %d %d", v1, v2, v3);

    Dirctn dir = NORTH;
    // Checking the size of enum
    printf("%d", dir);
    
    return 0;
}