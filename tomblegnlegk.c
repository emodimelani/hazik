#include <stdio.h>


int get_min(int arr[], int size) {
    
    int min = arr[0]; 
    
    
    for (int i = 1; i < size; i++) {
        if (arr[i] < min) {
            min = arr[i]; 
        }
    }
    
    return min;
}


int get_max(int arr[], int size) {
    
    int max = arr[0]; 
    
    for (int i = 1; i < size; i++) {
        if (arr[i] > max) {
            max = arr[i]; 
        }
    }
    
    return max;
}

int main() {
    
    int tomb[] = {45, 12, -8, 0, 99, 3, -15, 42};
    int meret = sizeof(tomb) / sizeof(tomb[0]);

    
    printf("A tomb elemei: ");
    for (int i = 0; i < meret; i++) {
        printf("%d ", tomb[i]);
    }
    printf("\n\n");

    
    int legkisebb = get_min(tomb, meret);
    int legnagyobb = get_max(tomb, meret);

    printf("A tomb legkisebb eleme: %d\n", legkisebb);
    printf("A tomb legnagyobb eleme: %d\n", legnagyobb);

    return 0;
}