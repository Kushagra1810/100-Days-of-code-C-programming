#include <stdio.h>

void rotateRight(int arr[], int n, int k) {
    int temp[100];
    int i;

    // Adjust k if greater than n
    k = k % n;

    // Copy last k elements to temp
    for(i = 0; i < k; i++) {
        temp[i] = arr[n - k + i];
    }

    // Shift the first n-k elements right by k positions
    for(i = n - 1; i >= k; i--) {
        arr[i] = arr[i - k];
    }

    // Copy temp elements to the beginning
    for(i = 0; i < k; i++) {
        arr[i] = temp[i];
    }
}

int main() {
    int arr[100], n, k, i;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the number of positions to rotate right: ");
    scanf("%d", &k);

    rotateRight(arr, n, k);

    printf("Array after rotating right by %d positions:\n", k);
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
