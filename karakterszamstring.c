#include <cs50.h>
#include <stdio.h>
#include <string.h>

int char_count(string s, char c);

int main(void)
{
    printf("char_count(\"Abba\", 'b') -> %d\n", char_count("Abba", 'b'));
    printf("char_count(\"Abba\", 'a') -> %d\n", char_count("Abba", 'a'));
    printf("char_count(\"Abba\", 'x') -> %d\n", char_count("Abba", 'x'));

    return 0;
}

int char_count(string s, char c)
{
    int count = 0;

    for (int i = 0, n = strlen(s); i < n; i++)
    {
        if (s[i] == c)
        {
            count++;
        }
    }

    return count;
}