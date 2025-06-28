#include <stdio.h>

// Function that specifies its parameters as restricts
void add(int *restrict arr1, int *restrict arr2,
         int *restrict res, int n) {
    for (int i = 0; i < n; i++)
        res[i] = arr1[i] + arr2[i];
}

int main() {
    int arr1[] = {1, 2, 3, 4, 5};
    int arr2[] = {10, 20, 30, 40, 50};
    int res[5];
    int n = 5;

  	// Calling function add
    add(arr1, arr2, res, n);

    for (int i = 0; i < n; i++)
        printf("%d ", res[i]);

    return 0;
}