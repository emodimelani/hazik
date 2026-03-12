#include <stdio.h>
#include <math.h>


double kor_kerulet(double r) {
    return 2 * r * M_PI;
}


double kor_terulet(double r) {
    return r * r * M_PI;
}

int main() {
    double sugar;

    printf("Kérem a kör sugarát: ");
    scanf("%lf", &sugar);

    printf("A kör kerülete: %.2lf\n", kor_kerulet(sugar));
    printf("A kör területe: %.2lf\n", kor_terulet(sugar));

    return 0;
}