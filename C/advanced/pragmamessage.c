#include <stdio.h>

// not defining gfg to trigger pragma message
// #define GeeksforGeeks

int main(){
#ifndef GeeksforGeeks
#pragma message(" GfG is not defined.")
#endif
    printf("Hello geek!\n");
    return 0;
}