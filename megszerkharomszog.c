#include <stdio.h>
#include <stdbool.h> 


bool valid_triangle(double a, double b, double c);

int main() {
    double a, b, c;

    printf("Kérem a háromszög 'a' oldalát: ");
    scanf("%lf", &a);
    printf("Kérem a háromszög 'b' oldalát: ");
    scanf("%lf", &b);
    printf("Kérem a háromszög 'c' oldalát: ");
    scanf("%lf", &c);

    
    if (valid_triangle(a, b, c)) {
        printf("Ezekből az oldalakból MEGSZERKESZTHETŐ a háromszög.\n");
    } else {
        printf("Ezekből az oldalakból NEM szerkeszthető meg a háromszög.\n");
    }

    
    printf("\n--- Beépített tesztek a feladat leírása alapján ---\n");
    
    if (valid_triangle(3.0, 4.0, 5.0)) {
        printf("3, 4, 5 értékekből: Megszerkeszthető (Helyes!)\n");
    } else {
        printf("3, 4, 5 értékekből: Nem szerkeszthető (Hibás működés!)\n");
    }

    if (!valid_triangle(1.0, 2.0, 10.0)) {
        printf("1, 2, 10 értékekből: Nem szerkeszthető (Helyes!)\n");
    } else {
        printf("1, 2, 10 értékekből: Megszerkeszthető (Hibás működés!)\n");
    }

    return 0;
}


bool valid_triangle(double a, double b, double c) {
    
    if (a <= 0.0 || b <= 0.0 || c <= 0.0) {
        return false;
    }

    
    if ((a + b > c) && (a + c > b) && (b + c > a)) {
        return true;
    }

    
    return false;
}