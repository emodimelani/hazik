#include <stdio.h>
#include <stdlib.h>
#include <time.h>


void elemzes(int arr[], int meret, int *min, int *max, double *avg);

int main(void)
{
    int tomb[10];

    srand(time(NULL));

    printf("A tömb elemei: ");
    for (int i = 0; i < 10; i++)
    {
        tomb[i] = (rand() % 90) + 10;
        
        printf("%d", tomb[i]);
        if (i < 9)
        {
            printf(", ");
        }
    }
    printf("\n");

    int legkisebb;
    int legnagyobb;
    double atlag;

    elemzes(tomb, 10, &legkisebb, &legnagyobb, &atlag);

    printf("Legkisebb elem: %d\n", legkisebb);
    printf("Legnagyobb elem: %d\n", legnagyobb);
    printf("Az elemek átlaga: %.1f\n", atlag);

    return 0;
}

void elemzes(int arr[], int meret, int *min, int *max, double *avg)
{
    *min = arr[0];
    *max = arr[0];
    int osszeg = 0;

    for (int i = 0; i < meret; i++)
    {
        if (arr[i] < *min)
        {
            *min = arr[i];
        }
        
        if (arr[i] > *max)
        {
            *max = arr[i];
        }
        
        osszeg += arr[i];
    }

    
    *avg = (double)osszeg / meret;
}