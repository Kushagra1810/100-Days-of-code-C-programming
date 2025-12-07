#include <stdio.h>

int findCeil(int arr[], int n, int x) {
    int left = 0, right = n - 1, ans = -1;

    while (left <= right) {
        int mid = (left + right) / 2;

        if (arr[mid] >= x) {
            ans = mid;        
            right = mid - 1;   
        } 
        else {
            left = mid + 1;
        }
    }

    return ans; 
}

int main() {
    int n, x;

    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter sorted array elements: ");
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter x: ");
    scanf("%d", &x);

    int index = findCeil(arr, n, x);

    printf("Ceil index: %d\n", index);

    return 0;
}
