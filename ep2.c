#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <pthread.h>
#include "ep2.h"

int main(int argc, char *argv[])
{

    int i, j;

    int d, k;
    d = atoi(argv[1]);
    k = atoi(argv[2]);
    if(argc > 3)
    {
        printf("está no modo debug;\n");
    }

    printf("tamanho da pista: %d\n", d);
    printf("quantidade de ciclistas: %d\n", k);

    struct Ciclista* ciclistas;
    ciclistas = malloc(k * sizeof(struct Ciclista));
    ciclistas = criaCiclistas(k, ciclistas);

    int **pista;
    pista = criaPista(pista, d);
    
    return 0;
}