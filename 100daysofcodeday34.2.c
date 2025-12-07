#include <stdio.h>

int main() {
    int arr[100], n, i, pos;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the position of the element to delete (0 to %d): ", n - 1);
    scanf("%d", &pos);

    // Validate position
    if(pos < 0 || pos >= n) {
        printf("Invalid position!\n");
        return 1;
    }

    // Shift elements to the left to delete
    for(i = pos; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }

    n--; // Decrease array size

    printf("Array after deletion:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    printf("\n");
    return 0;
}
