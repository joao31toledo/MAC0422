#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <pthread.h>

void* routine(int id)
{
    printf("thread %d running\n", id);
    sleep(3);
    printf("finnished thread %d\n", id);
}

int main(int argc, char* argv)
{
    int k = 10;
    pthread_t* ciclistas;
    ciclistas = (pthread_t*)malloc(k * sizeof(pthread_t));

    for(int i = 0; i < k; i++)
    {
        pthread_create(&ciclistas[i], NULL, &routine, i);
    }

    for(int j = 0; j < k; j++)
    {
        pthread_join(ciclistas[j], NULL);
    }
    // pthread_t t1, t2;
    // pthread_create(&t1, NULL, &routine, 1);
    // pthread_create(&t2, NULL, &routine, 2);
    // pthread_join(t1, NULL);
    // pthread_join(t2, NULL);

    return 0;
}