#include <pthread.h>
#include <stdio.h>

void* foo(void* arg) {
    printf("Thread is running.\n");
    
    // Explicity terminate thread
    pthread_exit(NULL);
    
    printf("This will not be executed.\n");
    return NULL;
}

int main() {
    pthread_t thread;
    pthread_create(&thread, NULL, foo, NULL);

    // Wait for created thread to finish
    pthread_join(thread, NULL);

    return 0;
}