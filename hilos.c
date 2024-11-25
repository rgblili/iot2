#include <stdio.h>
#include <pthread.h>

void * printHello(void *args)
{
    int num = *(int *)args;
    printf("Hola desde el hilo %d \n",num);
    pthread_exit(NULL);
}

int main()
{
    int NUM_THREADS = 20;
    pthread_t theadStatus[NUM_THREADS];
    int vars[NUM_THREADS];
    for (int i = 0; i< NUM_THREADS; i++)
    {
        vars[i] = i;
        pthread_create(&theadStatus[i], NULL, printHello, (void *)&vars[i]);
    }
    pthread_exit(NULL);
}