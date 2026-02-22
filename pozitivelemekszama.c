#include <stdio.h>

int main() {
    int szam;
    int pozitiv_db = 0;

   
    printf("Egész szám (vége: 0): ");
    scanf("%d", &szam);

    
    while (szam != 0) {
        if (szam > 0) {
            pozitiv_db++;
        }
        printf("Egész szám (vége: 0): ");
        scanf("%d", &szam);
    }

   
    printf("Pozitív elemek száma: %d\n", pozitiv_db);

    return 0;
}
