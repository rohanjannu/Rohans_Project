#include <pthread.h>
#include <stdio.h>

void* foo(void* arg) {
    
    // Get current thread ID
    pthread_t thisThread = pthread_self();
    printf("Current thread ID: %lu\n",
        (unsigned long)thisThread);
    return NULL;
}

int main() {
    pthread_t thread1;
    pthread_create(&thread1, NULL, foo, NULL);
    pthread_join(thread1, NULL);
    return 0;
}