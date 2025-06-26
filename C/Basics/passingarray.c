#include <stdio.h>
void print(int *arr, int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++)
            printf("%d ", *(arr + i * cols + j));
        printf("\n");
    }
}

int main() {
    int arr[3][3] = {{1, 2, 3},
    {4, 5, 6},{7, 8, 9}};
    
    // Passing the array as a pointer along with
    // the size of rows and columns
    print((int *)arr, 3, 3);

    return 0;
}