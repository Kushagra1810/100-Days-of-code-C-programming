#include <stdio.h>

int main() {
    int arr1[100], arr2[100], merged[200];
    int n1, n2, i, j;

    // Input for first array
    printf("Enter the number of elements in first array: ");
    scanf("%d", &n1);
    printf("Enter %d elements for first array:\n", n1);
    for(i = 0; i < n1; i++) {
        scanf("%d", &arr1[i]);
    }

    // Input for second array
    printf("Enter the number of elements in second array: ");
    scanf("%d", &n2);
    printf("Enter %d elements for second array:\n", n2);
    for(i = 0; i < n2; i++) {
        scanf("%d", &arr2[i]);
    }

    // Merging arrays
    for(i = 0; i < n1; i++) {
        merged[i] = arr1[i];
    }

    for(j = 0; j < n2; j++) {
        merged[i + j] = arr2[j];
    }

    // Output merged array
    printf("Merged array:\n");
    for(i = 0; i < n1 + n2; i++) {
        printf("%d ", merged[i]);
    }

    printf("\n");
    return 0;
}
