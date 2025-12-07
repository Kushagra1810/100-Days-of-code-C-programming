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

    int sum = 0;
    
    for (int i = 0; i < k; i++)
        sum += arr[i];

    int maxSum = sum;

    
    for (int i = k; i < n; i++) {
        sum = sum + arr[i] - arr[i - k]; 
        if (sum > maxSum)
            maxSum = sum;
    }

    printf("Maximum sum of subarrays of size %d: %d\n", k, maxSum);

    return 0;
}
