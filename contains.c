#include <stdio.h>
#include <stdbool.h>


bool contains(int arr[], int size, int target);

int main() {
    
    int tomb[] = {10, 25, 3, 42, 99, -5};
    int meret = sizeof(tomb) / sizeof(tomb[0]);
    int keresett_elem;

    
    printf("A tomb elemei: ");
    for (int i = 0; i < meret; i++) {
        printf("%d ", tomb[i]);
    }
    printf("\n\n");

    
    printf("Kerem a keresett elemet: ");
    scanf("%d", &keresett_elem);

    
    if (contains(tomb, meret, keresett_elem)) {
        printf("A(z) %d SZEREPEL a tombben.\n", keresett_elem);
    } else {
        printf("A(z) %d NEM SZEREPEL a tombben.\n", keresett_elem);
    }

    return 0;
}


bool contains(int arr[], int size, int target) {
    
    for (int i = 0; i < size; i++) {
       
        if (arr[i] == target) {
            return true; 
        }
    }
    
    
    return false;
}