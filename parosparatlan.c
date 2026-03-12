#include <stdio.h>


int is_even(int n);
int is_odd(int n);
int is_odd_using_even(int n);

int main() {
    int szam;

    printf("Kérem adjon meg egy egész számot: ");
    scanf("%d", &szam);

    
    if (is_even(szam) == 1) {
        printf("Az is_even() szerint: A megadott szám PÁROS.\n");
    } else {
        printf("Az is_even() szerint: A megadott szám NEM PÁROS.\n");
    }

   
    if (is_odd(szam) == 1) {
        printf("Az is_odd() szerint: A megadott szám PÁRATLAN.\n");
    }

    
    if (is_odd_using_even(szam) == 1) {
        printf("A bónusz függvény szerint is: A megadott szám PÁRATLAN.\n");
    }

    return 0;
}


int is_even(int n) {
    if (n % 2 == 0) {
        return 1; // Igaz
    } else {
        return 0; // Hamis
    }
}


int is_odd(int n) {
    if (n % 2 != 0) {
        return 1; // Igaz
    } else {
        return 0; // Hamis
    }
}


int is_odd_using_even(int n) {
    
    if (is_even(n) == 0) {
        return 1;
    } else {
        return 0;
    }
    
    
}