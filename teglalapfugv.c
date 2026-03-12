#include <stdio.h>

double teglalap_kerulet(double a, double b) {
    return 2 * (a + b);
}


double teglalap_terulet(double a, double b) {
    return a * b;
}

int main() {
    double a, b;

    printf("Kérem a téglalap 'a' oldalát: ");
    scanf("%lf", &a);
    
    printf("Kérem a téglalap 'b' oldalát: ");
    scanf("%lf", &b);


    printf("A téglalap kerülete: %.2lf\n", teglalap_kerulet(a, b));
    printf("A téglalap területe: %.2lf\n", teglalap_terulet(a, b));

    return 0;
}