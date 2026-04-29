#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int choice(const int n, const int tomb[])
{
    int index = rand() % n;
    return tomb[index];
}

int main(void)
{
    srand(time(NULL));

    int szamok[] = {10, 20, 30, 40, 50};
    int n = 5;

    int veletlen_elem = choice(n, szamok);

    printf("A kivalasztott elem: %d\n", veletlen_elem);

    return 0;
}