#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <pthread.h>

struct Ciclista {
  int id;
  int velocidade;
  int voltaAtual;
  int linha;
  int coluna;
};

struct Ciclista createCiclista(int index)
{
    struct Ciclista ciclista;
    ciclista.id = index;
    ciclista.velocidade = 30;
    ciclista.voltaAtual = 1;
    ciclista.linha = 0;
    ciclista.coluna = 0;

    return ciclista;
}

struct Ciclista* criaCiclistas(int k, struct Ciclista* ciclistas)
{

    for(int i = 0; i < k; i++)
    {
        ciclistas[i] = createCiclista(i);
    }

    return ciclistas;
}

int** criaPista(int** pista, int d)
{
    pista = (int**)malloc(10 * sizeof(int*)); // declara as 10 linhas que representam as 10 pistas do velodromo
    for(int j = 0; j < 10; j++)
    {
        pista[j] = (int*)malloc(d*sizeof(int));
    }

    return pista;
}