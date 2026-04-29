#include <stdio.h>
#include <stdlib.h>

int compare_ints(const void *a, const void *b)
{
    int arg1 = *(const int *)a;
    int arg2 = *(const int *)b;

    if (arg1 < arg2)
    {
        return -1;
    }
    else if (arg1 > arg2)
    {
        return 1;
    }

    return 0;
}

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

    size_t capacity = 1000;
    size_t count = 0;
    int *numbers = malloc(capacity * sizeof(int));

    if (numbers == NULL)
    {
        fclose(file);
        return 1;
    }

    while (fscanf(file, "%d", &numbers[count]) == 1)
    {
        count++;

        if (count == capacity)
        {
            capacity *= 2;
            int *temp = realloc(numbers, capacity * sizeof(int));

            if (temp == NULL)
            {
                free(numbers);
                fclose(file);
                return 1;
            }

            numbers = temp;
        }
    }

    fclose(file);

    qsort(numbers, count, sizeof(int), compare_ints);

    for (size_t i = 0; i < count; i++)
    {
        printf("%d\n", numbers[i]);
    }

    free(numbers);
    return 0;
}