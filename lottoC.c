#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    int n, min, max;

    printf("Hány db random számot kérsz?\n");
    scanf("%d", &n);

    printf("Alsó határ: ");
    scanf("%d", &min);

    printf("Felső határ (zárt intervallum): ");
    scanf("%d", &max);

    if (n > (max - min + 1))
    {
        printf("Hiba: Nem lehet %d különböző számot generálni a [%d, %d] intervallumban!\n", n, min, max);
        return 1;
    }

    int tomb[n];
    int count = 0; // Azt számolja, hány SIKERES (különböző) számot generáltunk eddig

    srand(time(NULL));

    while (count < n)
    {
        int random_szam = (rand() % (max - min + 1)) + min;
        bool is_duplicate = false;

        for (int i = 0; i < count; i++)
        {
            if (tomb[i] == random_szam)
            {
                is_duplicate = true;
                break; 
            }
        }

        if (!is_duplicate)
        {
            tomb[count] = random_szam;
            count++;
        }
    }

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (tomb[j] > tomb[j + 1])
            {
                int temp = tomb[j];
                tomb[j] = tomb[j + 1];
                tomb[j + 1] = temp;
            }
        }
    }

    printf("\nA generált számok:");
    for (int i = 0; i < n; i++)
    {
        printf(" %d", tomb[i]);
    }
    printf("\n");

    return 0;
}