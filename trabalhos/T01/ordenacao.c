#include <stdio.h>
#include "merge_sort.h"

void merge(int *vet, int p, int q, int r)
{
    int i = 0, j = 0, k = 0;

    int n1 = q - p + 1;
    int n2 = r - q;

    int A[n1], B[n2];

    // essa parte copia a primeira metade para A
    for (i = 0; i < n1; i++)
        A[i] = vet[p + i];

    // essa parte copia a segunda metade para B
    for (j = 0; j < n2; j++)
        B[j] = vet[q + 1 + j];

    i = 0;
    j = 0;

    // Essa parte intercala os vetores A e B
    for (k = p; k <= r; k++)
    {
        if (i < n1 && j < n2)
        {
            if (A[i] <= B[j])
            {
                vet[k] = A[i];
                i++;
            }
            else
            {
                vet[k] = B[j];
                j++;
            }
        }
        else if (i < n1)
        {
            vet[k] = A[i];
            i++;
        }
        else
        {
            vet[k] = B[j];
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