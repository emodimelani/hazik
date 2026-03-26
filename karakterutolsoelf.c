#include <cs50.h>
#include <stdio.h>
#include <string.h>

int rfind_char(string s, char c);

int main(void)
{
    printf("rfind_char(\"Abba\", 'b') -> %d\n", rfind_char("Abba", 'b'));
    printf("rfind_char(\"Abba\", 'a') -> %d\n", rfind_char("Abba", 'a'));
    printf("rfind_char(\"Abba\", 'x') -> %d\n", rfind_char("Abba", 'x'));
    printf("rfind_char(\"Aladar\", 'a') -> %d\n", rfind_char("Aladar", 'a'));

    return 0;
}

int rfind_char(string s, char c)
{
    for (int i = strlen(s) - 1; i >= 0; i--)
    {
        if (s[i] == c)
        {
            return i;
        }
    }

    return -1;
}