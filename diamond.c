#include <stdio.h>

int main(void) {
    int magassag;

    printf("Magasság: ");
    scanf("%d", &magassag);

    if (magassag <= 0 || magassag % 2 == 0) {
        printf("Hiba: A magasságnak pozitív páratlan számnak kell lennie!\n");
        return 1; 
    }

    for (int i = 1; i <= magassag; i += 2) {
        for (int j = 0; j < (magassag - i) / 2; j++) {
            printf(" ");
        }
        for (int j = 0; j < i; j++) {
            printf("*");
        }
        printf("\n");
    }

    for (int i = magassag - 2; i >= 1; i -= 2) {
        for (int j = 0; j < (magassag - i) / 2; j++) {
            printf(" ");
        }
        for (int j = 0; j < i; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
