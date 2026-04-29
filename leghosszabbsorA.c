#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char *argv[])
{
    if (argc != 4)
    {
        fprintf(stderr, "Hasznalat: %s <sorok_szama> <min_hossz> <max_hossz>\n", argv[0]);
        return 1;
    }

    int lines = atoi(argv[1]);
    int min_len = atoi(argv[2]);
    int max_len = atoi(argv[3]);

    if (lines <= 0 || min_len <= 0 || max_len < min_len)
    {
        fprintf(stderr, "Hiba: Ervenytelen parameterek!\n");
        return 1;
    }

    srand(time(NULL));

    for (int i = 0; i < lines; i++)
    {
        int length = min_len + (rand() % (max_len - min_len + 1));
        for (int j = 0; j < length; j++)
        {
            if (j == length - 1)
            {
                char c = 33 + (rand() % (126 - 33 + 1));
                putchar(c);
            }
            else
            {
                char c = 32 + (rand() % (126 - 32 + 1));
                putchar(c);
            }
        }
        
        putchar('\n');
    }

    return 0;
}