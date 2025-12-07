#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char name[200];
    char surname[50];
    int i, len, start = 0;

    printf("Enter full name: ");
    fgets(name, sizeof(name), stdin);

    
    len = strlen(name);
    if (name[len - 1] == '\n')
        name[len - 1] = '\0';

    len = strlen(name);

    
    for (i = len - 1; i >= 0; i--) {
        if (name[i] == ' ') {
            start = i + 1;
            break;
        }
    }

    
    strcpy(surname, &name[start]);

    
    printf("Initials + Surname: ");

    
    if (isalpha(name[0]))
        printf("%c", toupper(name[0]));

    
    for (i = 1; i < start - 1; i++) {
        if (name[i] == ' ' && isalpha(name[i + 1])) {
            printf("%c", toupper(name[i + 1]));
        }
    }

    
    printf(" %s\n", surname);

    return 0;
}
