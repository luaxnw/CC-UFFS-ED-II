#include <stdio.h>
#include "merge_sort.h"

void leituraVet(int *vet, int n){

    for (int i = 0; i < n; i++)
        scanf("%d", &vet[i]);
}