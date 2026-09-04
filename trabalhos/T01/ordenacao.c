#include <stdio.h>
#include "merge_sort.h"

void merge(int *vet, int p, int q, int r)
{
    /*
    p -> índice do primeiro elemento da primeira metade
    q -> índice do final da primeira metade e onde ocorre a divisão
    q -> índice final da segunda metade
    */
    int i = 0, j = 0, k = 0;

    int n1 = q - p + 1;
    int n2 = r - q;

    int left[n1], right[n2];

    // essa parte copia a primeira metade para o vetor da esquerda
    for (i = 0; i < n1; i++)
        left[i] = vet[p + i];

    // essa parte copia a segunda metade para o vetor da direita
    for (j = 0; j < n2; j++)
        right[j] = vet[q + 1 + j];

    i = 0;
    j = 0;

    // Essa parte intercala os vetores left e right
    for (k = p; k <= r; k++)
    {
        if (i < n1 && j < n2)
        {
            if (left[i] <= right[j])
            {
                vet[k] = left[i];
                i++;
            }
            else
            {
                vet[k] = right[j];
                j++;
            }
        }
        else if (i < n1)
        {
            vet[k] = left[i];
            i++;
        }
        else
        {
            vet[k] = right[j];
            j++;
        }
    }
}

void mergeSort(int *vet, int p, int r)
{
    if (p < r)
    {
        int q = ((p + r) / 2);
        mergeSort(vet, p, q);
        mergeSort(vet, q + 1, r);
        merge(vet, p, q, r);
    }
}