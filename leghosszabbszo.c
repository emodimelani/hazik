#include <stdio.h>
#include <string.h>

int main(void)
{
    char s[1000];
    int count = 0;
    int max_len = 0;

    printf("Adj meg szavakat '*' végjelig!\n");

    while (1)
    {
        printf("Szó: ");
        
        fgets(s, sizeof(s), stdin);

        int len = strlen(s);

        if (len > 0 && s[len - 1] == '\n')
        {
            s[len - 1] = '\0';
            len--; 
        }

        if (strcmp(s, "*") == 0)
        {
            break;
        }

        count++;

        if (len > max_len)
        {
            max_len = len;
        }
    }

    printf("\n%d db szót adtál meg. A leghosszabb szó %d karakterből áll.\n", count, max_len);

    return 0;
}