#include <stdio.h>
#include <stdbool.h>


bool is_sorted(int arr[], int size);

int main() {
    
    int arr1[] = {3, 1, 4, 1, 5, 9};
    
    int size1 = sizeof(arr1) / sizeof(arr1[0]);

    
    int arr2[] = {1, 2, 3, 4, 5, 5, 8};
    int size2 = sizeof(arr2) / sizeof(arr2[0]);

    
    int arr3[] = {42};
    int size3 = sizeof(arr3) / sizeof(arr3[0]);

    
    printf("1. tomb: ");
    if (is_sorted(arr1, size1)) {
        printf("Rendezett.\n");
    } else {
        printf("NEM rendezett.\n");
    }

    printf("2. tomb: ");
    if (is_sorted(arr2, size2)) {
        printf("Rendezett.\n");
    } else {
        printf("NEM rendezett.\n");
    }

    printf("3. tomb (1 elem): ");
    if (is_sorted(arr3, size3)) {
        printf("Rendezett.\n");
    } else {
        printf("NEM rendezett.\n");
    }

    return 0;
}


bool is_sorted(int arr[], int size) {
    
    if (size <= 1) {
        return true;
    }

    
    for (int i = 0; i < size - 1; i++) {
        if (arr[i] > arr[i + 1]) {
            return false;
        }
    }

    
    return true;
}