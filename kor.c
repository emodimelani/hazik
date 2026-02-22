#include <stdio.h>
#define _USE_MATH_DEFINES
#include <math.h>
 
int main ()
{    // sugár bekérése valós értékként
     double sugar;
     
     
     printf("Adja meg a kör sugarát (cm-ben): ");
     scanf("%lf", &sugar); //lf a double tipushoz
     
     //számítások
     double kerulet = 2 * sugar * M_PI;
     double terulet = sugar * sugar * M_PI;
     
     //Informatív kiiratás
     printf("\n");
     printf("A kör kerülete: %.2f cm\n", kerulet);
     printf("A kör területe: %.2f cm2\n", terulet);
     
     return 0;

}     
