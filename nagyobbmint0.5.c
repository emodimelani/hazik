#include <stdio.h>

int main(void)
{
    FILE *in = fopen("in.txt", "r");
    if (in == NULL)
    {
        return 1;
    }

    FILE *out = fopen("out.txt", "w");
    if (out == NULL)
    {
        fclose(in);
        return 1;
    }

    printf("# in.txt sikeresen megnyitva\n");
    printf("# 0,5-nél nagyobb számok szűrése...\n");

    double szam;
    int db = 0;

    while (fscanf(in, "%lf", &szam) == 1)
    {
        if (szam > 0.5)
        {
            fprintf(out, "%f\n", szam);
            db++;
        }
    }

    printf("# szűrés vége\n");

    fclose(in);
    fclose(out);

    printf("# out.txt bezárva\n");
    printf("# out.txt-be kiírt számok mennyisége: %i db\n", db);

    return 0;
}