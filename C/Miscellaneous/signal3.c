#include <stdio.h>
#include <stdlib.h>
#include <signal.h>
#include <unistd.h>

void handle_signal(int signal_num) {
    printf("Received signal: %d\n", signal_num);
}

int main() {
    
    // Handle signal
    signal(SIGINT, handle_signal);

    // Get current process ID
    pid_t pid = getpid();

    // Generate signal using kill()
    kill(pid, SIGINT);
    return 0;
}