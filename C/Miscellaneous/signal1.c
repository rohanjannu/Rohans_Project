#include <stdio.h> 
#include <signal.h> 
#include <stdlib.h>
  
// Handler for SIGINT, triggered by 
// Ctrl-C at the keyboard 
void singalHandler(int sig)  { 
    printf("Caught signal %d\n", sig);
    exit(sig);
} 
  
int main()  { 
    signal(SIGINT, singalHandler); 
    while (1){
        printf("Hello World!\n");
    }
    return 0; 
}