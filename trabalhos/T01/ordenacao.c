#include <stdio.h>
#include "merge_sort.h"

void merge(int *vet, int p, int q, int r)
{
    int i = 0, j = 0, k = 0;
    int n1 = q - p + 1;
    int n2 = r - q;

    int A[n1], B[n2];

    for (i = 1; i < n1; i++)
        A[i] = vet[p + i - 1];

    for (j = 1; j < n2; j++)
        B[j] = vet[q + 1];

    i = 0;
    j = 0;

    for (k = p; k < r; k++){
        if (A[i] <= B[i])
            vet[k] = A[i];
        else{
            vet[k] = B[j];
            j = j + 1;
        } 
    }

}


void mergeSort(int *vet, int p, int r)
{
    if (p < r){
        int q = (p + r / 2);
        mergeSort(vet, p, q);
        mergeSort(vet, q+1,r);
        merge(vet,p,q,r);

    }
}