#include <time.h>
#include "cria_vetores.h"
#include "in_out.h"
#include "sorters.h"

int main(void)
{
    clock_t inicio = clock();

    //int vet_1[100];
    int vet_2[100];
    //int vet_3[100];

    //int vet_4[1000];
    //int vet_5[1000];
    //int vet_6[1000];

    //int vet_7[10000];
    //int vet_8[10000];
    //int vet_9[10000];

    //vetorCemCrescente(vet_1);
    vetorCemDecrescente(vet_2);
    //vetorCemAleatorio(vet_3);

    //vetorMilCrescente(vet_4);
    //vetorMilDecrescente(vet_5);
    //vetorMilAleatorio(vet_6);

    //vetorDezMilCrescente(vet_7);
    //vetorDezMilDecrescente(vet_8);
    //vetorDezMilAleatorio(vet_8);

    bubbleSort(vet_2,100);


    clock_t fim = clock();
    // tempo em segundos
    double tempo = (double)(fim - inicio) / CLOCKS_PER_SEC;

    printf("Tempo: %lf\n", tempo);
}
