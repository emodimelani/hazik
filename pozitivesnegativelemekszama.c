#include <stdio.h>

int main() {
    int szam;
    int pozitiv = 0, negativ = 0;

    
    printf("Egész szám (vége: 0): ");
    scanf("%d", &szam);

    
    while (szam != 0) {
        if (szam > 0) {
            pozitiv++;
        } else if (szam < 0) {
            negativ++;
        }
        printf("Egész szám (vége: 0): ");
        scanf("%d", &szam);
    }

    
    printf("Pozitiv elemek száma: %d\n", pozitiv);
    printf("Negativ elemek száma: %d\n", negativ);

    return 0;
}
