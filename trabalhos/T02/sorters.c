#include <stdio.h>
#include "sorters.h"

// selection sort

void selectionSort(int *vet, int size)
{
    int comparacoes = 0;

    for (int i = 0; i < size - 1; i++) // percore até size - 1
    {
        int min = i; // assume que o menor está no índice i

        for (int j = i + 1; j < size; j++) // lê todo o vetor a partir do primeiro elemento depois do min, garantindo que só leia a parte não ordenada
        {
            if (vet[min] > vet[j])
                min = j; // min virá o índice j
        }

        swap(vet, i, min); // quando percorreu todo o vetor não ordenadom troca a o i com min
    }
}

// insertion sort

void insertionSort(int *vet, int n)
{
    for (int i = 1; i < n; ++i)
    {
        int key = vet[i];
        int j = i - 1;

        while (j >= 0 && vet[j] > key)
        {
            vet[j + 1] = vet[j];
            j = j - 1;
        }
        vet[j + 1] = key;
    }
}

// bubble sort

void bubbleSort(int *vet, int size)
{
    int flag = 0;
    int comparacoes = 0;
    for (int i = size - 1; i > 0; i--)
    {
        flag = 0;

        for (int j = 0; j < i; j++) // o fato de i ser size - 1 previne que o último valor seja comparado com algo
        {
            if (vet[j] > vet[j + 1])
            {
                swap(vet, j, j + 1);
                flag = 1;
            }
            comparacoes++;
        }
        if (flag == 0) // swap retorna 1. quando sai do segundo looping e o valor é 0, encerra o programa
        {
            return;
        }
        comparacoes++;
    }

    return;
}

// quicksort
int partition(int *vet, int low, int high)
{

    int pivot = vet[high];

    int i = low - 1;

    for (int j = low; j <= high - 1; j++)
    {
        if (vet[j] < pivot)
        {
            i++;
            swap(vet, i, j);
        }
    }

    swap(vet, i + 1, high);

    return i + 1;
}

void quickSort(int *vet, int low, int high)
{
    if (low < high)
    {
        int pi = partition(vet, low, high);

        quickSort(vet, low, pi - 1);
        quickSort(vet, pi + 1, high);
    }
}

// merge sort

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

void merge(int *vet, int p, int q, int r)
{
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

// swap
void swap(int *v, int i, int n)
{
    int aux = v[i];

    v[i] = v[n];
    v[n] = aux;
}
