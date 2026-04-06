#include <ctype.h>
#include <stdio.h>
#include <string.h>

int is_strong(char pw[]);

int main(void)
{
    char jelszo[100];

    printf("Adj meg jelszavakat '*' végjelig!\n\n");

    while (1)
    {
        printf("jelszó: ");
        scanf("%99s", jelszo);

        if (strcmp(jelszo, "*") == 0)
        {
            break;
        }

        if (is_strong(jelszo) == 1)
        {
            printf("erős jelszó\n\n");
        }
        else
        {
            printf("gyenge jelszó\n\n");
        }
    }

    return 0;
}

int is_strong(char pw[])
{
    if (strlen(pw) < 8)
    {
        return 0;
    }

    int has_lower = 0;
    int has_upper = 0;
    int has_digit = 0;

    for (int i = 0, n = strlen(pw); i < n; i++)
    {
        if (islower(pw[i]))
        {
            has_lower = 1;
        }
        else if (isupper(pw[i]))
        {
            has_upper = 1;
        }
        else if (isdigit(pw[i]))
        {
            has_digit = 1;
        }
    }

    if (has_lower == 1 && has_upper == 1 && has_digit == 1)
    {
        return 1;
    }

    return 0;
}