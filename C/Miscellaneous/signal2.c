#include <stdio.h>
#include <stdlib.h>
#include <signal.h>

// Signal handler function
void signalHandler(int sig) {
    printf("Interrupt handled: %d", sig);
    
    // Optionally exit the program after handling
    exit(sig);
}

int main() {
    
    // Handle signal
    signal(SIGINT, signalHandler);
    
    // Automatically generate a signal
    raise(SIGINT);
    return 0;
}