#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    FILE *fp = fopen("valos_szamok.txt", "r");
    if (fp == NULL)
    {
        fprintf(stderr, "Hiba! Nem sikerült megnyitni a fájlt!\n");
        return 1;
    }

    long double sum = 0;
    char s[128];

    while (fscanf(fp, "%127s", s) == 1)
    {
        for (int i = 0; s[i] != '\0'; i++)
        {
            if (s[i] == ',')
            {
                s[i] = '.';
            }
        }

        long double ertek;
        sscanf(s, "%Lf", &ertek);
        sum += ertek;
    }

    fclose(fp);

    printf("%.20Lf\n", sum);

    return 0;
}