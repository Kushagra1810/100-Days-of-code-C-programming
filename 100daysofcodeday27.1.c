#include <stdio.h>

int main() {
    // Upper half (2 to 7 stars)
    for(int i = 2; i <= 7; i++) {
        for(int j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }
    // Lower half (6 to 2 stars)
    for(int i = 6; i >= 2; i--) {
        for(int j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
