#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    FILE *file = fopen("numbers.txt", "w");

    if (file == NULL)
    {
        fprintf(stderr, "Hiba a fajl letrehozasakor!\n");
        return 1;
    }

    srand(time(NULL));

    for (int i = 0; i < 100; i++)
    {
        int num = 10 + (rand() % 90);
        fprintf(file, "%d\n", num);
    }

    fclose(file);
    return 0;
}