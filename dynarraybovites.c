#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    int *data;
    size_t size;
    size_t capacity;
} DynArray;

void da_clear(DynArray *self)
{
    if (self == NULL)
    {
        return;
    }

    free(self->data);
    self->data = NULL;
    self->size = 0;
    self->capacity = 0;
}

void da_push(DynArray *self, int value)
{
    if (self->size >= self->capacity)
    {
        size_t new_capacity = (self->capacity == 0) ? 4 : self->capacity * 2;
        int *new_data = realloc(self->data, new_capacity * sizeof(int));
        if (new_data != NULL)
        {
            self->data = new_data;
            self->capacity = new_capacity;
        }
    }
    self->data[self->size++] = value;
}

int main(void)
{
    DynArray tomb = {NULL, 0, 0};

    da_push(&tomb, 10);
    da_push(&tomb, 20);

    da_clear(&tomb);

    da_push(&tomb, 30);

    da_clear(&tomb);

    return 0;
}