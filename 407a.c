#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 10
typedef struct
{
    int min;
    int max;
    double avg;
} Stats;

Stats get_stats(int arr[], int n);

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

    Stats eredmeny = get_stats(szamok, SIZE);

    printf("Legkisebb elem: %i\n", eredmeny.min);
    printf("Legnagyobb elem: %i\n", eredmeny.max);
    printf("Az elemek atlaga: %.1f\n", eredmeny.avg);

    return 0;
}

Stats get_stats(int arr[], int n)
{
    Stats s; 
    
    s.min = arr[0];
    s.max = arr[0];
    int sum = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] < s.min)
        {
            s.min = arr[i];
        }
        if (arr[i] > s.max)
        {
            s.max = arr[i];
        }
        sum += arr[i];
    }

    s.avg = (double) sum / n;
    return s;
}