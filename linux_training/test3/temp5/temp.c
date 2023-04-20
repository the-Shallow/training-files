#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>

int counter = 0;               
pthread_mutex_t mutex;        

void* increment_thread(void* arg) {
    int i;
    for (i = 0; i < 100000; i++) {
        pthread_mutex_lock(&mutex);   
        counter++;                    
        pthread_mutex_unlock(&mutex); 
    }
    return NULL;
}


void* decrement_thread(void* arg) {
    int i;
    for (i = 0; i < 100000; i++) {
        pthread_mutex_lock(&mutex);   
        counter--;                    
        pthread_mutex_unlock(&mutex); 
    }
    return NULL;
}

int main() {
    pthread_t thread1, thread2;

    
    if (pthread_mutex_init(&mutex, NULL) != 0) {
        perror("pthread_mutex_init");
        exit(1);
    }

    if (pthread_create(&thread1, NULL, increment_thread, NULL) != 0) {
        perror("pthread_create");
        exit(1);
    }
    if (pthread_create(&thread2, NULL, decrement_thread, NULL) != 0) {
        perror("pthread_create");
        exit(1);
    }


    if (pthread_join(thread1, NULL) != 0) {
        perror("pthread_join");
        exit(1);
    }
    if (pthread_join(thread2, NULL) != 0) {
        perror("pthread_join");
        exit(1);
    }

  
    if (pthread_mutex_destroy(&mutex) != 0) {
        perror("pthread_mutex_destroy");
        exit(1);
    }

    printf("Counter: %d\n", counter);

    return 0;
}

