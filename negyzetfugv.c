#include <stdio.h>


double negyzet_kerulet(double a) {
    return 4.0 * a;
}


double negyzet_terulet(double a) {
    return a * a;
}

int main() {
    double a;

    printf("Kérem a négyzet oldalának hosszát: ");
    scanf("%lf", &a);

    
    printf("A négyzet kerülete: %.2lf\n", negyzet_kerulet(a));
    printf("A négyzet területe: %.2lf\n", negyzet_terulet(a));

    return 0;
}