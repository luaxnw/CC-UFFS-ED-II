// implemente selection sort

#include <stdio.h>

void swap(int *v, int i, int n);
void insertionSort(int *v, int size);

int main(void)
{
    int size = 0;
    scanf("%d", &size);
    int v[size];

    printf("size: %d\n", size);

    for (int i = 0; i < size; i++)
        scanf("%d", &v[i]);

    insertionSort(v, size);

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

void insertionSort(int *v, int size)
{
    for (int i = 1; i < size; i++){
        int chave = v[i];

        for (int j)
    }



}