#include <stdio.h>

int main() {
    int n;
    printf("Enter size of array: ");
    scanf("%d", &n);

    int nums[n], answer[n];
    printf("Enter array elements: ");
    for (int i = 0; i < n; i++)
        scanf("%d", &nums[i]);

    
    answer[0] = 1; 
    for (int i = 1; i < n; i++)
        answer[i] = answer[i - 1] * nums[i - 1];

    
    int suffix = 1;
    for (int i = n - 1; i >= 0; i--) {
        answer[i] *= suffix;
        suffix *= nums[i];
    }

    
    printf("Product Array: ");
    for (int i = 0; i < n; i++) {
        if (i != n - 1)
            printf("%d, ", answer[i]);
        else
            printf("%d", answer[i]);
    }

    return 0;
}

