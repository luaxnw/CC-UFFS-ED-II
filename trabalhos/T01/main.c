#include <stdio.h>
#include "merge_sort.h"

int main()
{
    int n = 0;
    printf("Informe o tamanho n do vetor: ");
    scanf("%d", &n);
    int vet[n];

    leituraVet(vet, n);
    mergeSort(vet, 0, n-1);
    imprimeVet(vet, n);

    return 0;
}