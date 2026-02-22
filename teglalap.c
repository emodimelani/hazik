#include <stdio.h>

int main()
{
    int a_oldal;
    int b_oldal;

    printf("Adja meg a téglalap 'a' oldalának hosszát(cm-ben): ");
    scanf("%d", &a_oldal);

    printf("Adja meg a téglalap 'b' oldalának hosszát(cm-ben): ");
    scanf("%d", &b_oldal);

    int kerulet = 2 * (a_oldal + b_oldal);
    int terulet = a_oldal * b_oldal;

     printf("\n");
     printf("A téglalap kerülete: %d  cm\n", kerulet);
     printf("A téglalap területe: %d cm\n", terulet);

     return 0;


}

