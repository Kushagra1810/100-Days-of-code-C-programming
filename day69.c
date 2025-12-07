#include <stdio.h>

int main() {
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements (one element is repeated): ", n);
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    int result = 0;

    
    for (int i = 0; i < n; i++)
        result ^= arr[i];

    
    for (int i = 1; i <= n - 1; i++)
        result ^= i;

    printf("Repeated element: %d\n", result);

    return 0;
}
