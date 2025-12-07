#include <stdio.h>

int binarySearch(int arr[], int n, int target) {
    int low = 0, high = n - 1, mid;

    while (low <= high) {
        mid = (low + high) / 2;

        if (arr[mid] == target)
            return mid;  // Target found
        else if (arr[mid] < target)
            low = mid + 1;  // Search right half
        else
            high = mid - 1; // Search left half
    }

    return -1;  // Target not found
}

int main() {
    int arr[100], n, target, i, result;

    printf("Enter the number of elements in the sorted array: ");
    scanf("%d", &n);

    printf("Enter %d sorted elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to search: ");
    scanf("%d", &target);

    result = binarySearch(arr, n, target);

    if (result != -1)
        printf("Element %d found at index %d.\n", target, result);
    else
        printf("Element %d not found in the array.\n", target);

    return 0;
}
