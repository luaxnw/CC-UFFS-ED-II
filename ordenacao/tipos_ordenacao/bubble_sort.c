#include <stdio.h>

void swap(int *v, int i, int n);
void bubbleSort(int v[], int size);

int main(void)
{
    int size = 0;
    scanf("%d", &size);
    int v[size];

    printf("size: %d\n", size);

    for (int i = 0; i < size; i++)
        scanf("%d", &v[i]);

    bubbleSort(v, size);

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

void bubbleSort(int v[], int size)
{
    int flag = 0;
    int comparacoes = 0;
    for (int i = size - 1; i > 0; i--)
    {
        flag = 0;

        for (int j = 0; j < i; j++) // o fato de i ser size - 1 previne que o último valor seja comparado com algo
        {
            if (v[j] > v[j + 1])
            {
                swap(v, j, j + 1);
                flag = 1;
            }
            comparacoes++;
        }
        if (flag == 0) // swap retorna 1. quando sai do segundo looping e o valor é 0, encerra o programa
        {
            printf("VETOR organizado com %d comparações\n", comparacoes);
            return;
        }
        comparacoes++;
    }

    printf("vetor organizado com %d comparações\n", comparacoes);
    return;
}