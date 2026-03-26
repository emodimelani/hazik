#include "prog1.h"
#include <stdio.h>
#include <string.h>

int match_ends(int n, string words[]);

int main(void)
{
    string szavak1[] = {"aba", "xyz", "aa", "x", "bbb"};
    int szavak1_meret = 5;

    printf("match_ends(szavak1) -> %d\n", match_ends(szavak1_meret, szavak1));

    string szavak2[] = {"", "x", "xy", "xyx", "xx"};
    int szavak2_meret = 5;
    printf("match_ends(szavak2) -> %d\n", match_ends(szavak2_meret, szavak2));

    string szavak3[] = {"aaa", "be", "abc", "hello"};
    int szavak3_meret = 4;
    printf("match_ends(szavak3) -> %d\n", match_ends(szavak3_meret, szavak3));

    for (int i = 0; i < szavak1_meret; ++i)
    {
        puts(szavak1[i]);
    }

    return 0;
}

int match_ends(int n, string words[])
{
    int count = 0;

    for (int i = 0; i < n; i++)
    {
        int len = strlen(words[i]);

        if (len >= 2 && words[i][0] == words[i][len - 1])
        {
            count++;
        }
    }

    return count;
}