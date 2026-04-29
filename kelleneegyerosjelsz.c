#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

void shuffle(int n, char array[])
{
    for (int i = n - 1; i >= 1; i--)
    {
        int j = rand() % (i + 1);
        char temp = array[i];
        array[i] = array[j];
        array[j] = temp;
    }
}

int main(void)
{
    srand(time(NULL));

    int length = 8 + (rand() % 5);
    
    char password[13];

    const char *lower = "abcdefghijklmnopqrstuvwxyz";
    const char *upper = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    const char *digits = "0123456789";
    const char *specials = ".,;'";
    const char *all = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789.,;'";

    password[0] = lower[rand() % strlen(lower)];
    password[1] = upper[rand() % strlen(upper)];
    password[2] = digits[rand() % strlen(digits)];
    password[3] = specials[rand() % strlen(specials)];

    for (int i = 4; i < length; i++)
    {
        password[i] = all[rand() % strlen(all)];
    }

    password[length] = '\0';

    shuffle(length, password);

    printf("%s\n", password);

    return 0;
}