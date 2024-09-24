#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>

void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int partition(int arr[], int low, int high) {
    int pivot = arr[high];
    int i = (low - 1);

    for (int j = low; j <= high - 1; j++) {
        if (arr[j] < pivot) {
            i++;
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i + 1], &arr[high]);
    return (i + 1);
}

void quickSort(int arr[], int low, int high) {
    if (low < high) {
        int pi = partition(arr, low, high);

        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

int main() {
    int arr[30];
    int n = sizeof(arr) / sizeof(arr[0]);

    srand(time(NULL));

    // Generar el arreglo con valores aleatorios
    for (int i = 0; i < n; i++) {
        arr[i] = rand();
    }

    // Ordenar usando Quick Sort
    quickSort(arr, 0, n - 1);

    printf("Arreglo ordenado con Quick Sort: \n");
    for (int i = 0; i < n; i++) {
        printf("%d \n", arr[i]);
    }
    printf("\n");

    getch();
    return 0;
}

