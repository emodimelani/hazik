#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

int main(void)
{
    srand(time(NULL));

    int n;
    printf("Hany db random szamot kersz?\n");
    scanf("%i", &n);

    int min;
    printf("Also hatar: ");
    scanf("%i", &min);

    int max;
    printf("Felso hatar (zart intervallum): ");
    scanf("%i", &max);

    int szamok[n];
    int db = 0;

    while (db < n)
    {
        int tipp = rand() % (max - min + 1) + min;
        bool mar_szerepel = false;

        for (int i = 0; i < db; i++)
        {
            if (szamok[i] == tipp)
            {
                mar_szerepel = true;
                break;
            }
        }

        if (!mar_szerepel)
        {
            szamok[db] = tipp;
            db++;
        }
    }

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (szamok[j] > szamok[j + 1])
            {
                int temp = szamok[j];
                szamok[j] = szamok[j + 1];
                szamok[j + 1] = temp;
            }
        }
    }

    printf("A generalt szamok: ");
    for (int i = 0; i < n; i++)
    {
        printf("%i", szamok[i]);
        if (i < n - 1)
        {
            printf(" ");
        }
    }
    printf("\n");

    return 0;
}