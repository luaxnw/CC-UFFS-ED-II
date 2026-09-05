#include <stdio.h>
#include "in_out.h"

void leituraVet(int *vet, int n)
{
    for (int i = 0; i < n; i++)
        scanf("%d", &vet[i]);
}

void imprimeVet(int *vet, int n)
{
    for (int i = 0; i < n; i++)
        printf("%d->", vet[i]);
        
    printf("\n");
}