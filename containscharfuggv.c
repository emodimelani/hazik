#include <cs50.h>
#include <stdio.h>
#include <string.h>

int contains_char(string s, char c);

int main(void)
{
    printf("contains_char(\"Abba\", 'b') -> %d\n", contains_char("Abba", 'b'));
    printf("contains_char(\"Abba\", 'x') -> %d\n", contains_char("Abba", 'x'));
    printf("contains_char(\"Aladar\", 'A') -> %d\n", contains_char("Aladar", 'A'));

    return 0;
}

int contains_char(string s, char c)
{
    for (int i = 0, n = strlen(s); i < n; i++)
    {
        if (s[i] == c)
        {
            return 1;
        }
    }

    return 0;
}