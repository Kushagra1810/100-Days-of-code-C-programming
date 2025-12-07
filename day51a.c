#include <stdio.h>

int firstOccurrence(int nums[], int n, int target) {
    int left = 0, right = n - 1, ans = -1;

    while (left <= right) {
        int mid = (left + right) / 2;

        if (nums[mid] == target) {
            ans = mid;
            right = mid - 1;  
        } 
        else if (nums[mid] > target) {
            right = mid - 1;
        } 
        else {
            left = mid + 1;
        }
    }

    return ans;
}

int lastOccurrence(int nums[], int n, int target) {
    int left = 0, right = n - 1, ans = -1;

    while (left <= right) {
        int mid = (left + right) / 2;

        if (nums[mid] == target) {
            ans = mid;
            left = mid + 1;  
        } 
        else if (nums[mid] > target) {
            right = mid - 1;
        } 
        else {
            left = mid + 1;
        }
    }

    return ans;
}

int main() {
    int n, target;
    
    printf("Enter size of array: ");
    scanf("%d", &n);

    int nums[n];

    printf("Enter sorted array elements: ");
    for (int i = 0; i < n; i++)
        scanf("%d", &nums[i]);

    printf("Enter target value: ");
    scanf("%d", &target);

    int first = firstOccurrence(nums, n, target);
    int last = lastOccurrence(nums, n, target);

    printf("First Occurrence Index: %d\n", first);
    printf("Last Occurrence Index: %d\n", last);

    return 0;
}
