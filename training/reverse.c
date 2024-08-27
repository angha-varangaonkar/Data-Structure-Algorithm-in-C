#include <stdio.h>

int main() {
    int arr[5] = {3, 45, 67, 89, 90};
    int i, temp;

    printf("Original array:\n");
    for (i = 0; i < 5; i++) {
        printf("%d ", arr[i]); 
    }
    printf("\n");

   
    for (i = 0; i < 5 / 2; i++) {
        temp = arr[i];
        arr[i] = arr[4 - i]; 
        arr[4 - i] = temp;
    }

    printf("\nReversed array:\n");
    for (i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
