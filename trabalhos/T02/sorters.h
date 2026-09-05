#include <stdio.h>

// selection sort

void selectionSort(int *vet, int size);

// insertion sort

void insertionSort(int *vet, int n);

// bubble sort

void bubbleSort(int *vet, int size);

// quicksort
int partition(int *vet, int low, int high);
void quickSort(int *vet, int low, int high);

// merge sort

void mergeSort(int *vet, int p, int r);

void merge(int *vet, int p, int q, int r);

// swap
void swap(int *vet, int i, int n);

