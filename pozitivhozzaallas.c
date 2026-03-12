#include <stdio.h>
#include <stdlib.h> 

void make_positive(int arr[], int size);

void print_array(int arr[], int size);

int main() {
    int tomb[] = {12, -5, 0, 42, -99, -1, 7};
    int meret = sizeof(tomb) / sizeof(tomb[0]);

    printf("A tomb az eljaras meghivasa ELOTT:\n");
    print_array(tomb, meret);

    make_positive(tomb, meret);

    printf("A tomb az eljaras meghivasa UTAN:\n");
    print_array(tomb, meret);

    return 0;
}

void make_positive(int arr[], int size) {
    for (int i = 0; i < size; i++) {
                if (arr[i] < 0) {            
            arr[i] = abs(arr[i]); 
            
                    }
    }
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