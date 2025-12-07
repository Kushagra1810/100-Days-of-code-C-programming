#include <stdio.h>

int main() {
    int n;
    printf("Enter a positive integer n: ");
    scanf("%d", &n);

    int total = n * (n + 1) / 2; 


    int x = 0;
    for (int i = 1; i <= n; i++) {
        if (i * i == total) {
            x = i;
            break;
        }
    }

    if (x != 0)
        printf("Pivot Integer: %d\n", x);
    else
        printf("Pivot Integer: -1\n");

    return 0;
}
