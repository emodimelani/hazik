#include <ctype.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    char szam[1000];

    printf("Szám: ");
    
    scanf("%999s", szam);

    int osszeg = 0;

    for (int i = 0, n = strlen(szam); i < n; i++)
    {
        if (isdigit(szam[i]))
        {
            osszeg += szam[i] - '0';
        }
    }

    printf("\nA számjegyek összege: %d\n", osszeg);

    return 0;
}