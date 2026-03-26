#include <stdio.h>
#include <stdlib.h>

char *get_alphabet(void);

int main(void)
{
    char *abc = get_alphabet();

    printf("%s\n", abc);

    free(abc);

    return 0;
}

char *get_alphabet(void)
{
    char *arr = malloc(27 * sizeof(char));

    if (arr == NULL)
    {
        return NULL;
    }

    for (int i = 0; i < 26; i++)
    {
        arr[i] = 'a' + i;
    }

    arr[26] = '\0';

    return arr;
}