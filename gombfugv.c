#include <stdio.h>
#include <math.h>


double get_double() {
    double ertek;
    scanf("%lf", &ertek);
    return ertek;
}


double gomb_felszin(double r) {
    return 4 * r * r * M_PI;
}


double gomb_terfogat(double r) {
    
    return (4.0 / 3.0) * r * r * r * M_PI;
}

int main() {
    double sugar;

    printf("Kérem a gömb sugarát: ");
    
    sugar = get_double();

    printf("A gömb felszíne: %.2lf\n", gomb_felszin(sugar));
    printf("A gömb térfogata: %.2lf\n", gomb_terfogat(sugar));

    return 0;
}