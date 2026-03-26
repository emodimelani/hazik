#include <stdio.h>

int main(void)
{
    int lathato[100] = {0};
    int szam;

    printf("Adj meg 0 végjelig egész számokat az [1, 99] intervallumból!\n");

    while (1)
    {
        printf("Szám: ");
        scanf("%d", &szam);

        if (szam == 0)
        {
            break;
        }
        else if (szam < 1 || szam > 99)
        {
            printf("Ez a szám kívül esik az elfogadható intervallumon!\n");
        }
        else
        {
            lathato[szam] = 1;
        }
    }

    int db = 0;
    for (