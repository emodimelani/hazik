#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    if (argc != 2)
    {
        fprintf(stderr, "Hasznalat: %s <fajlnev>\n", argv[0]);
        return 1;
    }

    FILE *file = fopen(argv[1], "r");
    if (file == NULL)
    {
        fprintf(stderr, "Hiba a fajl megnyitasakor!\n");
        return 1;
    }

    long long current_len = 0;
    long long max_len = 0;
    long long current_line = 1;
    long long best_line = 0;
    int ch;
    int has_content = 0;

    while ((ch = fgetc(file)) != EOF)
    {
        has_content = 1;

        if (ch == '\n')
        {
            if (current_len > max_len || best_line == 0)
            {
                max_len = current_len;
                best_line = current_line;
            }

            current_line++;
            current_len = 0;
        }
        else
        {
            current_len++;
        }
    }

    if (current_len > 0)
    {
        if (current_len > max_len || best_line == 0)
        {
            max_len = current_len;
            best_line = current_line;
        }
    }

    fclose(file);

    if (has_content)
    {
        printf("%lld %lld\n", best_line, max_len);
    }

    return 0;
}