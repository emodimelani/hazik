#include <stdio.h>

void fill_alphabet(char arr[]);

int main(void)
{
    char abc[26];
    
    fill_alphabet(abc);

    for (int i = 0; i < 26; i++)
    {
        printf("%c", abc[i]);
    }
    printf("\n");

    return 0;
}

void fill_alphabet(char arr[])
{
    for (int i = 0; i < 26; i++)
    {
        arr[i] = 'a' + i;
    }
}