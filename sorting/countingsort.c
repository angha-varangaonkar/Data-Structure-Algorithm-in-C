#include <stdio.h>

void countingSort(int inputArray[], int n) {
    
    int max = inputArray[0];
    for (int i = 1; i < n; i++) {
        if (inputArray[i] > max) {
            max = inputArray[i];
        }
    }

    int countArray[max + 1];
    for (int i = 0; i <= max; i++) {
        countArray[i] = 0;
    }

    
    for (int i = 0; i < n; i++) {
        countArray[inputArray[i]]++;
    }

    
    for (int i = 1; i <= max; i++) {
        countArray[i] += countArray[i - 1];
    }

    
    int outputArray[n];
    for (int i = n - 1; i >= 0; i--) {
        outputArray[countArray[inputArray[i]] - 1] = inputArray[i];
        countArray[inputArray[i]]--;
    }

    
    for (int i = 0; i < n; i++) {
        inputArray[i] = outputArray[i];
    }
}


void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int n;

    printf("ENTER THE NUMBER OF ELEMENTS:  ");
    scanf("%d", &n);
    printf("\n");

    int inputArray[n];

    printf("ENTER THE ELEMENTS: \n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &inputArray[i]);
    }
    printf("\n");

    printf("ORIGNAL ARRAY : ");
    printArray(inputArray, n);
    printf("\n");

    countingSort(inputArray, n);

    printf("SORTED ARRAY : ");
    printArray(inputArray, n);
    printf("\n");
}