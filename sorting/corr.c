/*#include <stdio.h>

void merge(int a[], int l, int h, int m);
void mergesort(int a[], int l, int h);

int main() {
    int arr[10] = {6, 5, 10, 12, 6, 7, 11, 15}, n = 8;
    int low = 0;
    int high = n - 1;
    mergesort(arr, low, high);
    for (int i = 0; i < 8; i++) {
        printf("%d\t", arr[i]);
    }
    return 0;
}

void mergesort(int a[], int l, int h) {
    if (l < h) {
        int m = (l + h) / 2;
        mergesort(a, l, m);
        mergesort(a, m + 1, h);
        merge(a, l, h, m);
    }
}

void merge(int a[], int l, int h, int m) {
    int n1 = m - l + 1;
    int n2 = h - m;
    int x[n1];
    int y[n2];

    // Copy data to temporary arrays x[] and y[]
    for (int i = 0; i < n1; i++) {
        x[i] = a[l + i];
    }
    for (int j = 0; j < n2; j++) {
        y[j] = a[m + 1 + j];
    }

    int i = 0, j = 0, k = l;
    while (i < n1 && j < n2) {
        if (x[i] <= y[j]) {
            a[k] = x[i];
            i++;
        } else {
            a[k] = y[j];
            j++;
        }
        k++;
    }

    // Copy the remaining elements of x[], if there are any
    while (i < n1) {
        a[k] = x[i];
        i++;
        k++;
    }

    // Copy the remaining elements of y[], if there are any
    while (j < n2) {
        a[k] = y[j];
        j++;
        k++;
    }
}*/


#include <stdio.h>

void merge(int a[], int l, int h, int m);
void mergesort(int a[], int l, int h);

int main() {
    int arr[8] = {6, 5, 10, 12, 6, 8, 11, 15};
    int n = 8;
    int low = 0;
    int high = n - 1;

    mergesort(arr, low, high);
    for (int i = 0; i < n; i++) {
        printf("%d\t", arr[i]);
    }
    return 0;
}

void mergesort(int a[], int l, int h) {
    if (l < h) {
        int m = l + (h - l) / 2;
        mergesort(a, l, m);
        mergesort(a, m + 1, h);
        merge(a, l, m, h);
    }
}

void merge(int a[], int l, int m, int h) {
    int n1 = m - l + 1;
    int n2 = h - m;
    int x[n1];
    int y[n2];

    // Copy data to temporary arrays x[] and y[]
    for (int i = 0; i < n1; i++) {
        x[i] = a[l + i];
    }

    for (int j = 0; j < n2; j++) {
        y[j] = a[m + 1 + j];
    }

    // Merge the temporary arrays back into a[l..h]
    int i = 0, j = 0, k = l;
    while (i < n1 && j < n2) {
        if (x[i] <= y[j]) {
            a[k] = x[i];
            i++;
        } else {
            a[k] = y[j];
            j++;
        }
        k++;
    }

    // Copy the remaining elements of x[], if there are any
    while (i < n1) {
        a[k] = x[i];
        i++;
        k++;
    }

    // Copy the remaining elements of y[], if there are any
    while (j < n2) {
        a[k] = y[j];
        j++;
        k++;
    }
}
