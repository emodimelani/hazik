#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

void my_strfry(char *s)
{
    if (s == NULL)
    {
        return;
    }

    int n = strlen(s);
    for (int i = n - 1; i > 0; i--)
    {
        int j = rand() % (i + 1);
        char temp = s[i];
        s[i] = s[j];
        s[j] = temp;
    }
}

int main(void)
{
    srand(time(NULL));

    char szo[] = "programozas";

    printf("Eredeti: %s\n", szo);

    my_strfry(szo);

    printf("Osszekevert: %s\n", szo);

    return 0;
}