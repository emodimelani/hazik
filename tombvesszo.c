#include <stdio.h>


void print_array(int arr[], int size);

int main() {
    
    int tomb[] = {4, 7, 34, 23, 67};
    int meret = sizeof(tomb) / sizeof(tomb[0]);

    
    print_array(tomb, meret);


    int masik_tomb[] = {10, 20, 30};
    int masik_meret = sizeof(masik_tomb) / sizeof(masik_tomb[0]);
    print_array(masik_tomb, masik_meret);

    return 0;
}


void print_array(int arr[], int size) {
    
    if (size <= 0) {
        printf("\n");
        return;
    }

    
    for (int i = 0; i < size; i++) {
        
        if (i == size - 1) {
            printf("%d\n", arr[i]); 
        } else {
            
            printf("%d, ", arr[i]);
        }
    }
}