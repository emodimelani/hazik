#include <stdio.h>

void kiir_mellekatlo(int matrix[6][6])
{
    for (int i = 0; i < 6; i++)
    {
        printf("%d ", matrix[i][6 - 1 - i]);
    }
    printf("\n");
}

int main(void)
{
    int matrix[6][6];
    int szamlalo = 1;

    for (int i = 0; i < 6; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            matrix[i][j] = szamlalo++;
        }
    }

    kiir_mellekatlo(matrix);

    return 0;
}