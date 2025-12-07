#include <stdio.h>


enum Status {
    SUCCESS = 10,
    FAILURE = 20,
    TIMEOUT = 30
};

int main() {
    
    printf("SUCCESS = %d\n", SUCCESS);
    printf("FAILURE = %d\n", FAILURE);
    printf("TIMEOUT = %d\n", TIMEOUT);

    
    int code = SUCCESS;
    printf("Enum assigned to int: code = %d\n", code);

    return 0;
}
