
#include <stdio.h>

int main() {
    int num;

    // Input the number
    printf("Enter a positive integer: ");
    scanf("%d", &num);

    if (num <= 0) {
        printf("Please enter a positive integer.\n");
        return 1;
    }

    printf("Factors of %d are: ", num);

    // Loop through numbers from 1 to num and check if it divides num
    for (int i = 1; i <= num; i++) {
        if (num % i == 0) {
            printf("%d ", i);
        }
    }

    printf("\n");

    return 0;
}
