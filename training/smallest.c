#include <stdio.h>
int arr[] = {0, 1, 7, 9, 24, 2, 15};
void element( int size, int *min, int *max) {
    
    *min = arr[0];
    *max = arr[0];

    for (int i = 1; i < size; i++) {
        if (arr[i] < *min) {
            *min = arr[i];
        }
        if (arr[i] > *max) {
            *max = arr[i];
        }
    }
}

int main() {
    
    int size = sizeof(arr) / sizeof(arr[0]);
    int min, max;

    element( size, &min, &max);

    printf("Smallest element: %d\n", min);
    printf("Largest element: %d\n", max);

    return 0;
}
