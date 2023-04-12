#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>

void* thread_function(void* arg) {
    printf("Thread is running!\n");
    return NULL;
}

int main() {

    pthread_attr_t attr;
    pthread_attr_init(&attr);

    size_t stack_size = 5 * 1024 * 1024;
    pthread_attr_setstacksize(&attr, stack_size);

    void* stack_addr;
    pthread_attr_getstack(&attr, &stack_addr, &stack_size);
    printf("Default stack address: %p\n", stack_addr);

   
    pthread_t thread;
    int result = pthread_create(&thread, &attr, thread_function, NULL);
    if (result == 0) {
        printf("Thread created successfully!\n");
    } else {
        printf("Failed to create thread.");
    }

  
    pthread_attr_destroy(&attr);

    pthread_join(thread, NULL);

    return 0;
}

