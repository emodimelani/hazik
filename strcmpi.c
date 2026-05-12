#include <stdio.h>
#include <ctype.h>

int strcmpi(const char *s1, const char *s2)
{
    while (*s1 != '\0' && tolower((unsigned char)*s1) == tolower((unsigned char)*s2))
    {
        s1++;
        s2++;
    }

    return tolower((unsigned char)*s1) - tolower((unsigned char)*s2);
}

int main(void)
{
    char *szoveg1 = "ez";
    char *szoveg2 = "EZ";

    if (strcmpi(szoveg1, szoveg2) == 0)
    {
        printf("A ket szo megegyezik (kis/nagybetu nem szamit).\n");
    }
    else
    {
        printf("A ket szo kulonbozik.\n");
    }

    return 0;
}