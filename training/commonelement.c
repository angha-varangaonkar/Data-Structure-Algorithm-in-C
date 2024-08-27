#include <stdio.h>

int main() {
    int size1, size2, size3;
    int i, j, k;

    printf("Enter size of array 1: ");
    scanf("%d", &size1);
    printf("Enter size of array 2: ");
    scanf("%d", &size2);
    printf("Enter size of array 3: ");
    scanf("%d", &size3);

    int arr1[size1], arr2[size2], arr3[size3];

    printf("Enter elements of array 1:\n");
    for (i = 0; i < size1; i++) {
        scanf("%d", &arr1[i]);
    }

    printf("Enter elements of array 2:\n");
    for (i = 0; i < size2; i++) {
        scanf("%d", &arr2[i]);
    }

    printf("Enter elements of array 3:\n");
    for (i = 0; i < size3; i++) {
        scanf("%d", &arr3[i]);
    }

    
    printf("Array 1: ");
    for (i = 0; i < size1; i++) {
        printf("%d ", arr1[i]);
    }
    printf("\n");

    printf("Array 2: ");
    for (i = 0; i < size2; i++) {
        printf("%d ", arr2[i]);
    }
    printf("\n");

    printf("Array 3: ");
    for (i = 0; i < size3; i++) {
        printf("%d ", arr3[i]);
    }
    printf("\n");

    printf("Common elements: ");
    for (i = 0; i < size1; i++) {
        for (j = 0; j < size2; j++) {
            if (arr1[i] == arr2[j]) {
                for (k = 0; k < size3; k++) {
                    if (arr1[i] == arr3[k]) {
                        printf("%d ", arr1[i]);
                    }
                }
            }
        }
    }
    printf("\n");

    return 0;
}