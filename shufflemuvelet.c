#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void shuffle(int n, int tomb[])
{
    for (int i = n - 1; i >= 1; i--)
    {
        int j = rand() % (i + 1);

        int temp = tomb[i];
        tomb[i] = tomb[j];
        tomb[j] = temp;
    }
}

int main(void)
{
    srand(time(NULL));

    int n = 8;
    int tomb[] = {1, 2, 3, 4, 5, 6, 7, 8};

    printf("Eredeti tomb:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", tomb[i]);
    }
    printf("\n\n");

    shuffle(n, tomb);

    printf("Megkevert tomb:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", tomb[i]);
    }
    printf("\n");

    return 0;
}