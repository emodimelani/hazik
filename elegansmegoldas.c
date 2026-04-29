#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    int *data;
    size_t size;
    size_t capacity;
} DynArray;

void da_init(DynArray *self)
{
    self->capacity = 10;
    self->size = 0;
    self->data = malloc(self->capacity * sizeof(int));

    if (self->data == NULL)
    {
        fprintf(stderr, "Memoriafoglalasi hiba!\n");
        exit(1);
    }
}

void da_append(DynArray *self, int value)
{
    if (self->size == self->capacity)
    {
        self->capacity *= 2;
        int *temp = realloc(self->data, self->capacity * sizeof(int));

        if (temp == NULL)
        {
            fprintf(stderr, "Memoriafoglalasi hiba (realloc)!\n");
            free(self->data);
            exit(1);
        }

        self->data = temp;
    }

    self->data[self->size] = value;
    self->size++;
}

void da_free(DynArray *self)
{
    free(self->data);
    self->data = NULL;
    self->size = 0;
    self->capacity = 0;
}

int da_sum(const DynArray *self)
{
    int sum = 0;

    for (size_t i = 0; i < self->size; i++)
    {
        sum += self->data[i];
    }

    return sum;
}

double da_average(const DynArray *self)
{
    if (self->size == 0)
    {
        return 0.0;
    }

    // Itt hasznaljuk fel az elegans da_sum() fuggvenyt
    return (double)da_sum(self) / self->size;
}

int main(void)
{
    FILE *file = fopen("numbers.txt", "r");

    if (file == NULL)
    {
        fprintf(stderr, "Hiba a fajl megnyitasakor!\n");
        return 1;
    }

    DynArray numbers;
    da_init(&numbers);

    int current;

    while (fscanf(file, "%d", &current) == 1)
    {
        da_append(&numbers, current);
    }

    fclose(file);

    double average = da_average(&numbers);
    printf("A szamok atlaga: %.2f\n", average);

    da_free(&numbers);

    return 0;
}