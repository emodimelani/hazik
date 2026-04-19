#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

int main(void)
{
    size_t chunk_size = 100 * 1024 * 1024;
    int count = 0;

    while (1)
    {
        char *ptr = malloc(chunk_size);
        if (ptr == NULL)
        {
            fprintf(stderr, "Elfogyott a memória vagy hiba történt!\n");
            return 1;
        }

        for (size_t i = 0; i < chunk_size; i += 4096)
        {
            ptr[i] = 'A';
        }

        count++;
        printf("%i. blokk lefoglalva (Összesen: %i MB)\n", count, count * 100);

        sleep(1);
    }

    return 0;
}