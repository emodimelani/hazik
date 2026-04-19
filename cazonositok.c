#include <stdio.h>
#include <string.h>
#include <ctype.h>

int is_valid_c_identifier(const char* input);

int main(void)
{
    printf("Adj meg sztringeket '*' végjelig!\n");

    char buffer[1024];
    while (1)
    {
        printf("Input: ");
        if (fgets(buffer, sizeof(buffer), stdin) == NULL)
        {
            break;
        }

        buffer[strcspn(buffer, "\n")] = '\0';

        if (strcmp(buffer, "*") == 0)
        {
            break;
        }

        if (is_valid_c_identifier(buffer))
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }

    return 0;
}

int is_valid_c_identifier(const char* input)
{
    int len = strlen(input);

    if (len == 0)
    {
        return 0;
    }

    if (!isalpha(input[0]) && input[0] != '_')
    {
        return 0;
    }

    for (int i = 1; i < len; i++)
    {
        if (!isalnum(input[i]) && input[i] != '_')
        {
            return 0;
        }
    }

    return 1;
}