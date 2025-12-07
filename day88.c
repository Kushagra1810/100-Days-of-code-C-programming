#include <stdio.h>


enum UserRole {
    ADMIN,
    USER,
    GUEST,
    TOTAL_ROLES  
};

int main() {
    
    const char *roleNames[] = {"ADMIN", "USER", "GUEST"};

    printf("User roles and their integer values:\n");
    for (int i = 0; i < TOTAL_ROLES; i++) {
        printf("%s = %d\n", roleNames[i], i);
    }

    return 0;
}
