#include <stdio.h>


int get_index(int arr[], int size, int target);

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

    
    int eredmeny = get_index(tomb, meret, keresett_elem);

    
    if (eredmeny != -1) {
        printf("A(z) %d elem a tomb %d. indexen talalhato meg.\n", keresett_elem, eredmeny);
    } else {
        printf("A(z) %d elem NEM SZEREPEL a tombben (visszateresi ertek: %d).\n", keresett_elem, eredmeny);
    }

    return 0;
}


int get_index(int arr[], int size, int target) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == target) {
            
            return i; 
        }
    }
    
    
    return -1;
}