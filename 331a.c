#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 10

void get_stats(int arr[], int n, int *min, int *max, double *avg);

int main(void)
{
    srand(time(NULL));

    int szamok[SIZE];

    printf("A tomb elemei: ");
    for (int i = 0; i < SIZE; i++)
    {
        szamok[i] = rand() % 90 + 10;
        printf("%i", szamok[i]);
        if (i < SIZE - 1)
        {
            printf(", ");
        }
    }
    printf("\n");

    int min;
    int max;
    double avg;

    get_stats(szamok, SIZE, &min, &max, &avg);

    printf("Legkisebb elem: %i\n", min);
    printf("Legnagyobb elem: %i\n", max);
    printf("Az elemek atlaga: %.1f\n", avg);

    return 0;
}
void get_stats(int arr[], int n, int *min, int *max, double *avg)
{
    *min = arr[0];
    *max = arr[0];
    int sum = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] < *min)
        {
            *min = arr[i];
        }
        if (arr[i] > *max)
        {
            *max = arr[i];
        }
        sum += arr[i];
    }
    *avg = (double) sum / n;
}