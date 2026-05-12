#include <stdio.h>

int main(void)
{
    int ajtok[601];

    for (int i = 1; i <= 600; i++)
    {
        ajtok[i] = 0;
    }

    for (int i = 1; i <= 600; i++)
    {
        for (int j = i; j <= 600; j += i)
        {
            if (ajtok[j] == 0)
            {
                ajtok[j] = 1;
            }
            else
            {
                ajtok[j] = 0;
            }
        }
    }

    for (int i = 1; i <= 600; i++)
    {
        if (ajtok[i] == 1)
        {
            printf("%d", i);
        }
    }
    printf("\n");

    int elso = 1;
    for (int i = 1; i <= 600; i++)
    {
        if (ajtok[i] == 1)
        {
            if (!elso)
            {
                printf(", ");
            }
            printf("%d", i);
            elso = 0;
        }
    }
    printf("\n");

    return 0;
}