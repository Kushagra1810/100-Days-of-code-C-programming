#include <stdio.h>
#include <ctype.h>  // For tolower()

int main() {
    char str[1000];
    int vowels = 0, consonants = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);  // Read string including spaces

    for(int i = 0; str[i] != '\0' && str[i] != '\n'; i++) {
        char ch = tolower(str[i]);  // Convert to lowercase for simplicity

        if((ch >= 'a' && ch <= 'z')) {  // Check if it is an alphabet
            if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
                vowels++;
            } else {
                consonants++;
            }
        }
    }

    printf("Number of vowels: %d\n", vowels);
    printf("Number of consonants: %d\n", consonants);

    return 0;
}
