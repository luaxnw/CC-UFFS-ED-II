#include <stdlib.h>
#include "cria_vetores.h"

void vetorCemCrescente(int *vet)
{
    for (int i = 0; i < 100; i++)
        vet[i] = i + 1;
}

void vetorCemDecrescente(int *vet)
{
    for (int i = 0; i < 100; i++)
        vet[i] = 100 - i;
}

void vetorCemAleatorio(int *vet)
{
    for (int i = 0; i < 100; i++)
        vet[i] = rand() % 1000;
}

void vetorMilCrescente(int *vet)
{
    for (int i = 0; i < 1000; i++)
        vet[i] = i + 1;
}

void vetorMilDecrescente(int *vet)
{
    for (int i = 0; i < 1000; i++)
        vet[i] = 1000 - i;
}

void vetorMilAleatorio(int *vet)
{
    for (int i = 0; i < 1000; i++)
        vet[i] = rand() % 1000;
}

void vetorDezMilCrescente(int *vet)
{
    for (int i = 0; i < 10000; i++)
        vet[i] = i + 1;
}

void vetorDezMilDecrescente(int *vet)
{
    for (int i = 0; i < 10000; i++)
        vet[i] = 10000 - i;
}

void vetorDezMilAleatorio(int *vet)
{
    for (int i = 0; i < 10000; i++)
        vet[i] = rand() % 10000;
}