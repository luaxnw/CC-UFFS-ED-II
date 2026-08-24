// implemente selection sort

#include <stdio.h>

void swap(int *v, int i, int n);
void selectionSort(int *v, int size);

int main(void)
{
    int size = 0;
    scanf("%d", &size);
    int v[size];

    printf("size: %d\n", size);

    for (int i = 0; i < size; i++)
        scanf("%d", &v[i]);

    selectionSort(v, size);

    for (int j = 0; j < size; j++)
        printf("%d ", v[j]);
    printf("\n");

    return 0;
}

void swap(int *v, int i, int n)
{
    int aux = v[i];

    v[i] = v[n];
    v[n] = aux;
}

void selectionSort(int *v, int size)
{
    int comparacoes = 0;

    for (int i = 0; i < size - 1; i++) // percore até size - 1
    {
        int min = i; // assume que o menor está no índice i

        for (int j = i + 1; j < size; j++) // lê todo o vetor a partir do primeiro elemento depois do min, garantindo que só leia a parte não ordenada
        {
            if (v[min] > v[j])
                min = j; // min virá o índice j

            comparacoes++;
        }

        swap(v, i, min); // quando percorreu todo o vetor não ordenadom troca a o i com min
        comparacoes++;
    }

    printf("Vetor ordenado com %d comparações\n", comparacoes);
}