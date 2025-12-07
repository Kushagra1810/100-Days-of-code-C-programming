#include <stdio.h>

int main() {
    int arr[100], n, i, newElement, pos;

    printf("Enter the number of elements in the sorted array: ");
    scanf("%d", &n);

    printf("Enter %d sorted elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to insert: ");
    scanf("%d", &newElement);

    // Find position where newElement should be inserted
    for (i = 0; i < n; i++) {
        if (arr[i] > newElement) {
            break;
        }
    }
    pos = i;

    // Shift elements to make space for newElement
    for (i = n; i > pos; i--) {
        arr[i] = arr[i - 1];
    }

    // Insert the element
    arr[pos] = newElement;
    n++;  // Increase array size

    printf("Array after insertion:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    printf("\n");
    return 0;
}
