#include <stdio.h>

int main() {
    int n, k;

    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter subarray size k: ");
    scanf("%d", &k);

    if (k > n) {
        printf("Invalid k\n");
        return 0;
    }

    printf("Maximum elements in each subarray of size %d: ", k);

    
    for (int i = 0; i <= n - k; i++) {
        int max = arr[i];
        
        for (int j = 1; j < k; j++) {
            if (arr[i + j] > max)
                max = arr[i + j];
        }
        printf("%d ", max);
    }

    printf("\n");
    return 0;
}
