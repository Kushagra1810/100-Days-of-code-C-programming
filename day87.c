#include <stdio.h>


enum UserRole {
    ADMIN,
    USER,
    GUEST
};

int main() {
    enum UserRole role;

    
    printf("Enter role (0 = ADMIN, 1 = USER, 2 = GUEST): ");
    scanf("%d", &role);

    
    switch (role) {
        case ADMIN:
            printf("Welcome, Admin! You have full access.\n");
            break;
        case USER:
            printf("Welcome, User! You have limited access.\n");
            break;
        case GUEST:
            printf("Welcome, Guest! You have minimal access.\n");
            break;
        default:
            printf("Invalid role!\n");
    }

    return 0;
}
