#include <stdio.h>

int findPivotIndex(int arr[], int n) {
    int totalSum = 0, leftSum = 0;

    
    for (int i = 0; i < n; i++)
        totalSum += arr[i];

    
    for (int i = 0; i < n; i++) {
        int rightSum = totalSum - leftSum - arr[i];

        if (leftSum == rightSum)
            return i;  

        leftSum += arr[i];
    }

    return -1;  
}

int main() {
    int n;

    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter array elements: ");
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    int pivot = findPivotIndex(arr, n);

    printf("Pivot Index: %d\n", pivot);

    return 0;
}
