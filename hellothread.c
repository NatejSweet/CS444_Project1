#include <stdio.h>
#include <pthread.h>

void *countUp(void *arg) {
    char *threadName = (char *)arg;
    for (int i = 0; i <=4; i++) {
        printf("thread %s: %d\n", threadName, i);
    }
    return NULL;
} 

int main(void) {
    pthread_t t1,t2;
    printf("Launching Threads\n");
    pthread_create(&t1, NULL, countUp, "thread 1");
    pthread_create(&t2, NULL, countUp, "thread 2");
    pthread_join(t1, NULL);
    pthread_join(t2, NULL);
    printf("Threads complete!\n");
    return 0;

}

