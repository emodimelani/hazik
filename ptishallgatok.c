#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

typedef struct
{
    char nev[50];
} Hallgato;

int hasonlit(const void *a, const void *b)
{
    Hallgato *h1 = (Hallgato *)a;
    Hallgato *h2 = (Hallgato *)b;
    return strcmp(h1->nev, h2->nev);
}

int main(void)
{
    FILE *fp = fopen("nevek.csv", "r");
    if (fp == NULL)
    {
        return 1;
    }

    Hallgato pti_hallgatok[100];
    int db = 0;
    char sor[100];

    while (fgets(sor, sizeof(sor), fp))
    {
        char *nev = strtok(sor, ",");
        char *kor = strtok(NULL, ",");
        char *szak = strtok(NULL, ",\n\r");

        if (nev && szak)
        {
            char szak_kis[10];
            int i = 0;
            while (szak[i])
            {
                szak_kis[i] = tolower(szak[i]);
                i++;
            }
            szak_kis[i] = '\0';

            if (strcmp(szak_kis, "pti") == 0)
            {
                nev[0] = toupper(nev[0]);
                for (int j = 1; nev[j]; j++)
                {
                    nev[j] =プレートtolower(nev[j]);
                }
                strcpy(pti_hallgatok[db].nev, nev);
                db++;
            }
        }
    }
    fclose(fp);

    qsort(pti_hallgatok, db, sizeof(Hallgato), hasonlit);

    for (int i = 0; i < db; i++)
    {
        printf("%s", pti_hallgatok[i].nev);
        if (i < db - 1)
        {
            printf(", ");
        }
    }
    printf("\n");

    return 0;
}