#include <stdio.h>
#include <stdlib.h> 
#include <time.h>  
#include <conio.h>

void bubbleSort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main()
{
    int arr[30];
    int n = sizeof(arr) / sizeof(arr[0]);

    srand(time(NULL));

    
    for (int i = 0; i < n; i++)
    {
        arr[i] = rand(); 
    }


    bubbleSort(arr, n);

    printf("Arreglo ordenado: \n");
    for (int i = 0; i < n; i++)
    {
        printf("%d \n", arr[i]);
    }
    printf("\n");

    getch();
    return 0;
}
