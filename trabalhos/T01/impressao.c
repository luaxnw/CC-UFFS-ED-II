#include <stdio.h>
#include "merge_sort.h"

void imprimeVet(int *vet, int n){
    for (int i = 0; i < n; i++)
        printf("%d->", vet[i]);
    printf("\n");
}
