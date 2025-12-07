#include <stdio.h>

int main() {
    int n;
    printf("Enter size of array: ");
    scanf("%d", &n);

    int nums[n];
    printf("Enter array elements: ");
    for (int i = 0; i < n; i++)
        scanf("%d", &nums[i]);

    
    int candidate = 0, count = 0;

    for (int i = 0; i < n; i++) {
        if (count == 0) {
            candidate = nums[i];
            count = 1;
        } 
        else if (nums[i] == candidate) {
            count++;
        } 
        else {
            count--;
        }
    }


    count = 0;
    for (int i = 0; i < n; i++)
        if (nums[i] == candidate)
            count++;

    if (count > n / 2)
        printf("Majority Element: %d\n", candidate);
    else
        printf("Majority Element: -1\n");

    return 0;
}
