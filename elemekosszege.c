#include <stdio.h>

int main () {
    int szam;
    int osszeg = 0;
    
    
    printf("Egész szám (vége:0): ");
    scanf("%d", &szam);
    
    
    while (szam != 0) {
       osszeg += szam;
       printf("Egész szám (vége:0): ");
       scanf("%d", &szam);
       }
       
       printf("Elemek összege: %d\n", osszeg);
       
       return 0;
}

